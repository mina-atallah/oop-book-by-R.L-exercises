#include <iostream>
using namespace std;
/*
    Raising a number n to a power p is the same as multiplying n by itself p times. 
    Write a function called power() that takes a double value for n and an int value for p, 
    and returns the result as a double value. 
    Use a default argument of 2 for p, so that if this argument is omitted, 
    the number n will be squared. 
    Write a main() function that gets val-ues from the user to test this function.
*/

double power(double n, int p = 2);

int main()
{
    double number;
    int pow;
    char choice;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Do you want to enter a power (y/n)? ";
    cin >> choice;
    
    if(choice == 'y' || choice == 'Y')
    {
        cout << "Enter power: ";
        cin >> pow;
        
        cout << "Result is " << power(number, pow) << endl;
    } 
    else {
        cout << "Result is "<< power(number) << endl;
    }

   return 0;
}

double power(double n, int p)
{
    double result = 1.0;

    for(int i =0; i < p; i++)
    {
        result *= n;
    }

    return result;
}