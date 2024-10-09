#include <iostream>
using namespace std;
/*
    Write a program that calculates the average of up to 100 English distances input by the
    user. Create an array of objects of the Distance class, as in the ENGLARAY example in
    this chapter. To calculate the average, you can borrow the add_dist() member function
    from the ENGLCON example in Chapter 6. You’ll also need a member function that divides
    a Distance value by an integer. Here’s one possibility:
    
    void Distance::div_dist(Distance d2, int divisor)
    {
        float fltfeet = d2.feet + d2.inches/12.0;
        fltfeet /= divisor;
        feet = int(fltfeet);
        inches = (fltfeet-feet) * 12.0;
    }
*/
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() //constructor (no args)
    { 
        feet = 0; 
        inches = 0; 
    }
    Distance(int ft, float in) //constructor (two args)
    { 
        feet = ft; 
        inches = in; 
    }
    void getdist() 
    {
        cout <<"Enter feet: "; 
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void showdist() const 
    { 
        cout << feet << "\'" << inches << '\"';
    }

    // used the function that was given in the exercise 
    void div_dist(Distance d2, int divisor)
    {
        float fltfeet = d2.feet + d2.inches/12.0;
        fltfeet /= divisor;

        feet = int(fltfeet);
        inches = (fltfeet-feet) * 12.0;
    }

    // borrowed this function form the example
    void add_dist(Distance d2, Distance d3)
    {
        inches = d2.inches + d3.inches; 
        feet = 0;
        if(inches >= 12.0) //if total exceeds 12.0,
        { //then decrease inches
            inches -= 12.0; //by 12.0 and
            feet++; //increase feet
        } //by 1
        feet += d2.feet + d3.feet; //add the feet
    }
};

int main()
{
    Distance distarr[100]; 
    Distance total(0, 0.0), average; 
    int count = 0;
    char choice; 

    do 
    {
        cout << "Enter a Distance" << endl; 
        distarr[count++].getdist();
        
        cout << "Do another (y/n)? ";
        cin >> choice;

    }while( choice != 'n' );

    for(int j=0; j<count; j++) 
    {
        total.add_dist( total, distarr[j] ); 
    }
    average.div_dist( total, count ); 

    cout << "The average is: ";
    average.showdist();
    cout << endl;
    
    return 0;
}