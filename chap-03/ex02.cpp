#include <iostream>
using namespace std;

/*
        Write a temperature-conversion program that gives the user the option of converting
        Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. 
        Use floating-point numbers. Interaction with the program might look like this:

        Type 1 to convert Fahrenheit to Celsius,
        2 to convert Celsius to Fahrenheit: 1
        Enter temperature in Fahrenheit: 70
        In Celsius that’s 21.111111


*/
int main() {

    int choice;
    float degree;


    cout << "Type 1 to convert Fahrenheit to Celsius," << endl;
    cout << "2 to convert Celsius to Fahrenheit: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> degree;

        float celsius_degree = (5.0/9.0) * (degree - 32);

        cout << "In Celsius that's " << celsius_degree << endl;
    }

    if (choice == 2)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> degree;

        float fahrenheit_degree = (degree  * (9.0/5.0)) + 32;

        cout << "In Fahrenheit that's " << fahrenheit_degree << endl;
    }

   return 0;
}