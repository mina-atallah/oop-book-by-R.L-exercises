#include <iostream>
using namespace std;
/*
    Start with the power() function of Exercise 2, which works only with type double.
    Create a series of overloaded functions with the same name that, in addition to double, 
    also work with types char, int, long, and float. Write a main() program that exercises
    these overloaded functions with all argument types
*/

double power(double n, int p = 2)
{
    double result = 1.0;

    for(int i =0; i < p; i++)
    {
        result *= n;
    }

    return result;
}

double power(float n, int p = 2)
{
    double result = 1.0;

    for(int i =0; i < p; i++)
    {
        result *= n;
    }

    return result;
}
double power(int n, int p = 2)
{
    double result = 1.0;

    for(int i =0; i < p; i++)
    {
        result *= n;
    }

    return result;
}

double power(char n, int p = 2)
{
    double result = 1.0;

    for(int i =0; i < p; i++)
    {
        result *= (n - '0');
    }

    return result;
}
double power(long n, int p = 2)
{
    double result = 1.0;

    for(int i =0; i < p; i++)
    {
        result *= n;
    }

    return result;
}

int main()
{
    long n = 4;
    cout << power('2', 10) << endl;
    cout << power(n, 3) << endl;
    cout << power(2.23F, 2) << endl;
    cout << power(2.0, 3) << endl;

   return 0;
}