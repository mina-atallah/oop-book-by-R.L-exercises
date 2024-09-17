#include <iostream>
using namespace std;

/*
    12. Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
    Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
    applied to fractions:

    Addition: a/b + c/d = (a*d + b*c) / (b*d)
    Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
    Multiplication: a/b * c/d = (a*c) / (b*d)
    Division: a/b / c/d = (a*d) / (b*c)

    The user should type the first fraction, an operator, and a second fraction. The program
    should then display the result and ask whether the user wants to continue.
*/
int main() {

    int a,b,c,d;
    char f_slash; // short for forward_slash
    char oper; // short for operation
    char choice;


    do {
        cout << "Enter first fraction: e.g (a / b) ";
        cin >> a >> f_slash >> b;
        if (b == 0) 
        {
            cout << "Error: Denominator can not be zero." << endl;
            return 1;
        }

        cout << "Enter operation: (+,-,*,/): ";
        cin >> oper;

        cout << "Enter second fraction: ";
        cin >> c >> f_slash >> d;

        if (d == 0) 
        {
            cout << "Error: Denominator can not be zero." << endl;
            return 1;
        }

        switch (oper)
        {
            case '+':
                cout << "Addition Result = " << ((a*d) + (b*c)) << "/" << (b*d) << endl;
                break;
                
            case '-':
                cout << "Subtraction Result = " << ((a*d) - (b*c)) << "/" << (b*d) << endl;
            break;

            case '*':
                cout << "Multiplication Result = " << (a*c) << "/" << (b*d) << endl;
            break;

            case '/':
                cout << "Division Result = " << (a*d) << "/" << (b*c) << endl;
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