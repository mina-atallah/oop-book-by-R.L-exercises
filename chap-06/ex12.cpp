#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
/*
    Note that one advantage of the OOP approach (is that an entire class can be used, without
    modification), in a different program.
    Use the fraction class from Exercise 11 in a program that generates a multiplication table for fractions. 
    Let the user input a denominator, and then generate all combinations of two such fractions that are between 0 and 1, and multiply them together. 
    Here’s an example of the output if the denominator is 6:

            1/6     1/3     1/2     2/3     5/6
    ------------------------------------------------
    1/6     1/36    1/18    1/12    1/9     5/36
    1/3     1/18    1/9     1/6     2/9     5/18
    1/2     1/12    1/6     1/4     1/3     5/12
    2/3     1/9     2/9     1/3     4/9     5/9
    5/6     5/36    5/18    5/12    5/9     25/36
*/
class Fraction
{
private:
    int num, denom;

    void lowterms() // change ourself to lowest terms
    {
        long tnum, tden, temp, gcd;
        tnum = labs(num); // use non-negative copies
        tden = labs(denom); // (needs cmath)
        
        if(tden==0 ) // check for n/0
        { cout << "Illegal fraction: division by 0"; exit(1); }
        else if( tnum==0 ) // check for 0/n
        { num=0; denom = 1; return; }
        
        // this ‘while’ loop finds the gcd of tnum and tden
        while(tnum != 0)
        {
            if(tnum < tden) // ensure numerator larger
            { temp=tnum; tnum=tden; tden=temp; } // swap them
            tnum = tnum - tden; // subtract them
        }
        
        gcd = tden; // this is greatest common divisor
        num = num / gcd; // divide both num and den by gcd
        denom = denom / gcd; // to reduce frac to lowest terms
    }

public:
    Fraction() : num(0), denom(1) {} // default constructor
    Fraction(int numerator, int denominator) : num(numerator), denom(denominator) {} // initialization constructor

    void setInput()
    {
        /*
            i wanted to handle invalid cases, so i searched i checked how to handle the slash case , and denom == 0 case
            cin.fail() -> to check the if the expected input is valid or not 
            cin.clear() -> to restart the error state and re-try to enter the input
            cin.ignore() -> to prevent the program from falling in infinite loop trying to read wrong or invalid or unexpected input

        */
        char slash;

        do{
            cout << "Enter fraction as (a/b): ";
            cin >> num >> slash >> denom;

            if (cin.fail() || slash != '/') {
                cout << "Invalid input format. Please enter fraction as (a/b): ";
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the entire line
                continue; // restart the loop
            }

            if(denom == 0)
            {
              do
                {
                    cout << "Denominator can not equal 0, Please Enter again";
                    cin >> denom;
                } while (denom == 0);
                
            }

        }while(slash != '/');

        lowterms();

    }
    
    void setInput(int a, int b) // overloading function
    {
        num = a;
        denom = b;

        lowterms();

    }

    void add(Fraction & fr1, Fraction & fr2)
    {
        num = (fr1.num*fr2.denom + fr1.denom*fr2.num);
        denom =(fr1.denom*fr2.denom);

        lowterms();
    }

    void sub(Fraction & fr1, Fraction & fr2) 
    {
        num = (fr1.num * fr2.denom - fr2.num * fr1.denom);
        denom = (fr1.denom * fr2.denom);

        lowterms();
    }

    void multi(Fraction & fr1, Fraction & fr2) 
    {
        num = (fr1.num * fr2.num); 
        denom = (fr1.denom * fr2.denom);

        lowterms();

    }

    void divi(Fraction & fr1, Fraction & fr2) 
    {
        num = (fr1.num * fr2.denom);
        denom = (fr1.denom * fr2.num);

        lowterms();
    }

    void display() const
    {
        cout << num << '/' << denom;
    }


};

int main()
{
    Fraction f1,f2,f3;
    int denom;

    cout << "Enter donominator: ";
    cin >> denom;

    // the first line before the divider ---- 
    // i had to change the display function in the class by removing printing endl in the end.
    cout << setw(7);
    for (int i = 1; i < denom; ++i) {
        f1.setInput(i, denom);
        f1.display();
        cout << setw(4);
    }
    cout << endl;

    // drawing line
    cout << "-----------------------------------------------"<< endl;

    for(int i = 1; i < denom; i++)
    {
        f1.setInput(i, denom);
        f1.display();

        // printing the multiplication
        for(int j =1; j < denom; j++)
        {
        
            f2.setInput(j, denom);
            f3.multi(f1,f2);
            cout << setw(4);   
            f3.display();

        }
        
        cout << endl;
    }
    


   return 0;
}