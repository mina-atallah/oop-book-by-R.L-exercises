#include <iostream>
using namespace std;

/*
    Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
    calculates its factorial, until the user enters 0, at which point it terminates. You can
    enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
    effect.
*/

int main() // it can only handle untill 20, above 20 starts overflowing!
{
    unsigned int numb;
    unsigned long fact;//long for larger numbers
    int choice;

    do
    {
    cout << "Enter a number: ";
    cin >> numb; //get number

    fact = 1;

    for(int j=numb; j>0; j--) //multiply 1 by
    {
        fact *= j; //numb, numb-1, ..., 2, 1
    }
    cout << "Factorial is " << fact << endl;

    cout << "Try Again?" << endl;
    cout << "(1) Yes" << endl;
    cout << "(0) Exit: ";
    cin >> choice;

    }while(choice != 0);
    return 0;
}