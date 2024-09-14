#include <iostream>
using namespace std;
/*
    Write a program that encourages the user to enter two fractions, and then displays their
    sum in fractional form. (You don’t need to reduce it to lowest terms.) The interaction
    with the user might look like this:
    Enter first fraction: 1/2
    Enter second fraction: 2/5
    Sum = 9/10

      a     c     a*d + b*c
    ---- + ---- = -----------
      b     d       b*d
*/
int main() {
    int a,b,c,d;
    char frac;

    cout << "Enter first fraction: ";
    cin >> a >> frac >> b;
    cout << "Enter first fraction: ";
    cin >> c >> frac >> d;

    cout << "Sum = " << ((a*d) + (b*c)) << "/" << (b*d) << endl;

   return 0;
}