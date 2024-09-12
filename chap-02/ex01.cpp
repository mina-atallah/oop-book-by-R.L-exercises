#include <iostream>
using namespace std;

/*
    convet gallons to cubic feet

    cubic foot = 7.481 gallon
    x gallons = ? cubic feet ?
    gallons = (y / x ) cubic feet
    cubic feet = (x / y) gallons
*/
int main()
{
    const float gal_per_cubic_foot = 7.481;
    
    float numOfGals;
    float cubicFeet;

    cout << "Enter Number of Gallons: ";
    cin>> numOfGals;
    
    cubicFeet = numOfGals / gal_per_cubic_foot;

    cout << numOfGals << " Gallons equal " << cubicFeet << " Cubic feet" << endl;
    return 0;
}