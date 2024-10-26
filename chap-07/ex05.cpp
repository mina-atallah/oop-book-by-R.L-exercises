#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
/*
    Start with the fraction class from Exercises 11 and 12 in Chapter 6.
    Write a main() program that obtains an arbitrary number of fractions from the user, stores them in an
    array of type fraction, averages them, and displays the result.
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
    Fraction() : num(0), denom(1) {}
    Fraction(int numerator, int denominator) : num(numerator), denom(denominator) { 
        lowterms(); 
    }

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
    int size = 2;
    Fraction fracArr[size];
    Fraction avrgFraction;

    for(int i =0; i < size; i++)
    {
        fracArr[i].setInput(rand() % 50 + 1, rand() % 50 + 1);
        fracArr[i].display();
        cout << " ";
    }
    cout << endl;

    avrgFraction = fracArr[0];
     for(int i =1; i < size; i++)
    {
        avrgFraction.add(avrgFraction, fracArr[i]);
    }

    Fraction divisor(size, 1);
    avrgFraction.divi(avrgFraction, divisor);
    cout << "Average Fraction is: ";
    avrgFraction.display();

   return 0;
}