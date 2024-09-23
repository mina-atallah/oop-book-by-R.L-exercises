#include <iostream>
using namespace std;
/*
    Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
    functions for each of the four arithmetic operations. 
    They can be called fadd(), fsub(), fmul(), and fdiv(). Each of these functions should take two arguments of type struct fraction, and return an argument of the same type.
*/
struct stFraction
{
    int numerator, denominator;
};

// Add function
stFraction fadd(stFraction frac1, stFraction frac2)
{
    stFraction frac3;
        frac3.numerator = ((frac1.numerator*frac2.denominator) + (frac1.denominator*frac2.numerator)) ;
        frac3.denominator= (frac1.denominator*frac2.denominator);

    return frac3;
};

// Sub function
stFraction fsub(stFraction frac1, stFraction frac2)
{
    stFraction frac3;
            frac3.numerator =  ((frac1.numerator*frac2.denominator) - (frac1.denominator*frac2.numerator));
            frac3.denominator = (frac1.denominator*frac2.denominator);
            
    return frac3;
}
// Mul function
stFraction fmul(stFraction frac1, stFraction frac2)
{
    stFraction frac3;
    frac3.numerator = (frac1.numerator*frac2.numerator);
    frac3.denominator = (frac1.denominator*frac2.denominator);

    return frac3;
}

// Div function
stFraction fdiv(stFraction frac1, stFraction frac2)
{
    stFraction frac3;
    frac3.numerator = (frac1.numerator*frac2.denominator);
    frac3.denominator = (frac1.denominator*frac2.numerator);

    return frac3;
}
int main() {

    stFraction frac1, frac2, frac3 = {};
    char f_slash; // short for forward_slash
    char oper; // short for operation
    char choice;


    do {
        cout << "Enter first fraction: e.g (a / b): ";
        cin >> frac1.numerator >> f_slash >> frac1.denominator;
        
        if (frac1.denominator == 0) 
        {
            cout << "Error: Denominator can not be zero." << endl;
            return 1;
        }

        cout << "Enter operation: (+,-,*,/): ";
        cin >> oper;

        cout << "Enter second fraction: e.g (c / d): ";
        cin >> frac2.numerator >> f_slash >> frac2.denominator;

        if (frac2.denominator == 0) 
        {
            cout << "Error: Denominator can not be zero." << endl;
            return 1;
        }

        switch (oper)
        {
            case '+':
                frac3 = fadd(frac1, frac2);
                cout << "Addition Result = " << frac3.numerator << "/" << frac3.denominator << endl;
                break;
                
            case '-':
                frac3 = fsub(frac1, frac2);
                cout << "Subtraction Result = " << frac3.numerator << "/" << frac3.denominator << endl;
            break;

            case '*':
                frac3 = fmul(frac1, frac2);
                cout<< "Multiplication Result = " << frac3.numerator << "/" << frac3.denominator << endl;
            break;

            case '/':
                frac3 = fdiv(frac1, frac2);
                cout << "Division Result = " << frac3.numerator << "/" << frac3.denominator << endl;
            break;

            default:
                cout << "This operation does not exist!" << endl;
                break;
        }

        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice != 'n' && choice != 'N');

   return 0;
}