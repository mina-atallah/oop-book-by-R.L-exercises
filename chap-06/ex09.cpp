#include <iostream>
using namespace std;
/*
    Transform the fraction structure from Exercise 8 in Chapter 4 into a fraction class.
    Member data is the fraction’s numerator and denominator. Member functions should
    accept input from the user in the form 3/5, and output the fraction’s value in the same
    format. Another member function should add two fraction values. Write a main() program
    that allows the user to repeatedly input two fractions and then displays their sum. After
    each operation, ask whether the user wants to continue
*/
class Fraction
{
private:
    int num, denom;

public:
    Fraction() : num(0), denom(1) {}
    Fraction(int numerator, int denominator) : num(numerator), denom(denominator) {}

    void setInput()
    {
        char slash;

        cout << "Enter fraction as (a/b): ";
        cin >> num >> slash >> denom;

    }


    void add(Fraction fr1, Fraction fr2)
    {
        num = (fr1.num*fr2.denom + fr1.denom*fr2.num);
        denom =(fr1.denom*fr2.denom);

    }

    void display() const
    {
        cout << num << '/' << denom<< endl;
    }
};
int main()
{
    Fraction fr1, fr2, fr3;
    char choice;

    do
    {
        fr1.setInput();
        fr2.setInput();

        fr3.add(fr1, fr2);

        fr3.display();

        cout << "Do you want to continue? (y/n): ";
        cin>> choice;

    } while (choice == 'Y' || choice == 'y');
    

   return 0;
}