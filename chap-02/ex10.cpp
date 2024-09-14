#include <iostream>
#include <iomanip>
using namespace std;

/*
        Write a program to convert the old pounds-shillings-pence format to
        decimal pounds. An example of the user’s interaction with the program would be
        Enter pounds: 7
        Enter shillings: 17
        Enter pence: 9
        Decimal pounds = £7.89

        pound = 20 shillings
        shilling = 12 penny
        1 pound in pence = 20 * 12 = 240 penny

        7 pound in pence -> (7 * 20 * 12) add to shillings in pence + pence 
        decimal pound = (7 * 20 * 12) + (17 * 12) + (9) / 240

*/
int main() {
    int pounds, shillings, pence;
    
    cout << "Enter pounds: ";
    cin >> pounds;
    cout << "Enter shillings: ";
    cin >> shillings;
    cout << "Enter pence: ";
    cin >> pence;

    // convert pounds to pence ,+ shillings to pence , + pence and divide by 240 (1 pound = 240 penny)
    float pound_conversion = ((pounds * 20 * 12) + (shillings * 12) + pence) / 240.0;

    cout << setprecision(3) <<"Decimal pounds = £" << pound_conversion << endl;

   return 0;
}