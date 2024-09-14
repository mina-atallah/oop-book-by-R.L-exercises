#include <iostream>
using namespace std;

/*
    Write the inverse of Exercise 10, so that the user enters an amount in Great Britain’s new
    decimal-pounds notation (pounds and pence), 
    
    and the program converts it to the old pounds-shillings-pence notation. 
    
    An example of interaction with the program might be
    Enter decimal pounds: 3.51
    Equivalent in old notation = £3.10.2.

    Make use of the fact that if you assign a floating-point value (say 12.34) to an integer
    variable, the decimal fraction (0.34) is lost; the integer value is simply 12.
    
    Use a cast to
    avoid a compiler warning. You can use statements like

    float decpounds; // input from user (new-style pounds)
    int pounds; // old-style (integer) pounds
    float decfrac; // decimal fraction (smaller than 1.0)
    pounds = static_cast<int>(decpounds); // remove decimal fraction
    decfrac = decpounds - pounds; // regain decimal fraction
    You can then multiply decfrac by 20 to find shillings. A similar operation obtains pence



        pound = 20 shillings
        shilling = 12 penny
        1 pound in pence = 20 * 12 = 240 penny
    */
int main() {
    // for old notation
    int pounds, shillings, pence;

    // user input
    float decimal_pounds;

    float decimal_fractions;

     cout << "Enter decimal pounds: ";
     cin >> decimal_pounds;

    // the pounds without fraction
    pounds = static_cast<int>(decimal_pounds);
    // the fraction
    decimal_fractions = decimal_pounds - pounds;

    shillings = static_cast<int>(decimal_fractions * 20);
    pence = static_cast<int>((decimal_fractions * 20 - shillings) * 12);

     cout << "Equivalent in old notation = £" << pounds << '.' << shillings << '.' << pence << pounds;

   return 0;
}