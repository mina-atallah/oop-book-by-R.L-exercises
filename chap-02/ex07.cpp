#include <iostream>
using namespace std;

/*
    convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
    by 9/5 and adding 32. Write a program that allows the user to enter a floating-point num-
    ber representing degrees Celsius, and then displays the corresponding degrees
    Fahrenheit.


*/
int main() {
    float celsius_degree;
    cout << "Enter Current Degree in Celsius: ";
    cin >> celsius_degree;
   
    float fahrenheit_degree = (celsius_degree * 9/5) + 32;

    cout << celsius_degree << " Celsius " << "is equalivent to " << fahrenheit_degree << " Fahrenheit" << endl;
   return 0;
}