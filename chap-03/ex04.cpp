#include <iostream>
using namespace std;

/*
    Create the equivalent of a four-function calculator. The program should ask the user to
    enter a number, an operator, and another number. (Use floating point.) It should then
    carry out the specified arithmetical operation: adding, subtracting, multiplying, or divid-
    ing the two numbers. Use a switch statement to select the operation. Finally, display the
    result.
*/

int main() {
    char choice, oper;
    float num1, num2, result;
   
   do
   {
        cout << "Enter first number, operator, second number: ";
        cin >> num1 >> oper >> num2;

        switch (oper)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            break;
            cout << "some input is wrong" << endl;
        }

        cout << "Answer = " << result << endl;

        cout << "Do another (y/n)? ";
        cin >> choice;

    } while (choice != 'n' && choice != 'N');


   return 0;
}