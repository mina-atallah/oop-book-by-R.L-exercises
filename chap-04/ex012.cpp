 #include <iostream>
 using namespace std;
 
struct stFraction
{
    int numerator, denominator;
};

int main() {

    stFraction frac1, frac2 = {};
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
                cout << "Addition Result = " << ((frac1.numerator*frac2.denominator) + (frac1.denominator*frac2.numerator)) << "/" << (frac1.denominator*frac2.denominator) << endl;
                break;
                
            case '-':
                cout << "Subtraction Result = " << ((frac1.numerator*frac2.denominator) - (frac1.denominator*frac2.numerator)) << "/" << (frac1.denominator*frac2.denominator) << endl;
            break;

            case '*':
                cout << "Multiplication Result = " << (frac1.numerator*frac2.numerator) << "/" << (frac1.denominator*frac2.denominator) << endl;
            break;

            case '/':
                cout << "Division Result = " << (frac1.numerator*frac2.denominator) << "/" << (frac1.denominator*frac2.numerator) << endl;
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