#include <iostream>
using namespace std;

/*
    - a program that allows the user to enter an amount in dollars, and then displays this
       value converted to these four other monetary units (franc, yen, deutschemark).

       for example
        1 bp = 1.487 dollar
        x bp = 3 dollars

        x bp = (3 * 1) / 1.487

       example 2
        1 ff = 0.172 dollar
        y ff = 3 dollar

        y ff = (3 * 1) / 0.172
*/
int main() {
    float british_pound = 1.487; //$
    float french_franc = 0.172; //$
    float german_deutschemark = 0.548; //$
    float japanese_yen = 0.00955;//$
   
    float amount_dollar;
    cout << "Enter Amount in Dollars: ";
    cin >> amount_dollar;

    cout << amount_dollar << " Dollars equals " << amount_dollar / british_pound  << " British pound" << endl;
    cout << amount_dollar << " Dollars equals " << amount_dollar / french_franc  << " French franc" << endl;
    cout << amount_dollar << " Dollars equals " << amount_dollar / german_deutschemark  << " German deutschemark" << endl;
    cout << amount_dollar << " Dollars equals " << amount_dollar / japanese_yen  << " Japanese yen" << endl;
   return 0;
}