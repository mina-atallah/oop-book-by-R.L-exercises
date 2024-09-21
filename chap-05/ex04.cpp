#include <iostream>
using namespace std;
/*
    Write a function that takes two Distance values as arguments and returns the larger one.
    Include a main() program that accepts two Distance values from the user, compares
    them, and displays the larger. (See the RETSTRC program for hints.)
*/
struct Distance
{
    int feet;
    float inches;
};

Distance maxDistance(Distance& d1, Distance& d2) {
    Distance d;
    if (d1.feet > d2.feet)
    {
       return d1;

    } 
    else if (d2.feet > d1.feet) {
        return d2;
    }
    else 
    {
        if (d1.inches > d2.inches)
        {
            return d1;
        } 
        else 
        {
            return d2;
        }
    }

};

int main()
{
    Distance d1, d2, d3;

    cout << "Enter distance 1 feet: ";
    cin >> d1.feet;
    cout << "Enter distance 1 inches: ";
    cin >> d1.inches;

    cout << "Enter distance 2 feet: ";
    cin >> d2.feet;
    cout << "Enter distance 2 inches: ";
    cin >> d2.inches;
    
    d3 = maxDistance(d1, d2);

    cout << "Longer distance is (" << d3.feet << "," << d3.inches << ")"<< endl;

   return 0;
}

