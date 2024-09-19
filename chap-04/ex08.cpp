 #include <iostream>
 using namespace std;
/*
    Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ Programming
    Basics.” 
    This program stores the numerator and denominator of two fractions before
    adding them, and may also store the answer, which is also a fraction. Modify the pro-
    gram so that all fractions are stored in variables of type struct fraction, whose two
    members are the fraction’s numerator and denominator (both type int). All fraction-
    related data should be stored in structures of this type
*/
struct stFraction
{
    int numerator, denominator;
};

 int main()
{
    stFraction frac1, frac2;
    char slash; 

    cout << "Enter fraction as (a/b): ";
    cin >> frac1.numerator >> slash >> frac1.denominator;
    cout << "Enter fraction as (a/b): ";
    cin >> frac2.numerator >> slash >> frac2.denominator;

    cout << "Sum of the two fractions is " << (frac1.numerator*frac2.denominator + frac1.denominator*frac2.numerator)<< slash <<(frac1.denominator*frac2.denominator) << endl;

    return 0;
}