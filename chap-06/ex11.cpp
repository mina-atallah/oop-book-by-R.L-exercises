#include <iostream>
#include <limits>
using namespace std;
/*
11. Modify the four-function fraction calculator of Exercise 12 in Chapter 5 to use a
fraction class rather than a structure. There should be member functions for input and
output, as well as for the four arithmetical operations. While you’re at it, you might as
well install the capability to reduce fractions to lowest terms. Here’s a member function
that will reduce the fraction object of which it is a member to lowest terms. It finds the
greatest common divisor (gcd) of the fraction’s numerator and denominator, and uses this
gcd to divide both numbers.
    void fraction::lowterms() // change ourself to lowest terms
    {
        long tnum, tden, temp, gcd;
        tnum = labs(num); // use non-negative copies
        tden = labs(den); // (needs cmath)
        if(tden==0 ) // check for n/0
    { cout << “Illegal fraction: division by 0”; exit(1); }
    else if( tnum==0 ) // check for 0/n
    { num=0; den = 1; return; }
    // this ‘while’ loop finds the gcd of tnum and tden
    while(tnum != 0)
    {
    if(tnum < tden) // ensure numerator larger
    { temp=tnum; tnum=tden; tden=temp; } // swap them
    tnum = tnum - tden; // subtract them
    }
    gcd = tden; // this is greatest common divisor
    num = num / gcd; // divide both num and den by gcd
    den = den / gcd; // to reduce frac to lowest terms
    }
You can call this function at the end of each arithmetic function, or just before you per-
form output. You’ll also need the usual member functions: four arithmetic operations,
input, and display. You may find a two-argument constructor useful.
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

    void add(Fraction fr1, Fraction fr2)
    {
        num = (fr1.num*fr2.denom + fr1.denom*fr2.num);
        denom =(fr1.denom*fr2.denom);

        lowterms();
    }

    void sub(Fraction fr1, Fraction fr2) 
    {
        num = (fr1.num * fr2.denom - fr2.num * fr1.denom);
        denom = (fr1.denom * fr2.denom);

        lowterms();
    }

    void multi(Fraction fr1, Fraction fr2) 
    {
        num = (fr1.num * fr2.num); 
        denom = (fr1.denom * fr2.denom);

        lowterms();

    }

    void divi(Fraction fr1, Fraction fr2) 
    {
        num = (fr1.num * fr2.denom);
        denom = (fr1.denom * fr2.num);

        lowterms();
    }


    void display() const
    {
        cout << num << '/' << denom<< endl;
    }
};


int main()
{
    Fraction frac1, frac2, frac3;
    char oper; // short for operation
    char choice;


    do {
        
       frac1.setInput();

       cout << "What Operation do you want (+,-,*,/)? :";
       cin >> oper;

       frac2.setInput();

        switch (oper)
        {
            case '+':
                frac3.add(frac1, frac2);
                cout << "Addition Result = ";
                frac3.display();
                break;
                
            case '-':
                frac3.sub(frac1, frac2);
                cout << "Subtraction Result = ";
                frac3.display();

            break;

            case '*':
                frac3.multi(frac1, frac2);
                cout<< "Multiplication Result = ";
                frac3.display();
            break;

            case '/':
                frac3.divi(frac1, frac2);
                cout << "Division Result = ";
                frac3.display();
            break;
            default:
                cout << "This operation does not exist!" << endl;
                break;
        }

        cout << "Do you want to continue (y/n)? ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    


   return 0;
}