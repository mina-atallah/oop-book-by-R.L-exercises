#include <iostream>
#include <iomanip>
using namespace std;
/*
    Write a function called zeroSmaller() that is passed two int arguments by reference
    and then sets the smaller of the two numbers to 0. 
    Write a main() program to exercise this function.
*/
void zeroSmaller(int&, int&);

int main()
{
    int a = 2;
    int b = 3;
    int c = 10;
    int d = 5;  

    cout << setw(5) << "Before" << setw(12) << "After" << endl ;

    zeroSmaller(a, b);  
    zeroSmaller(c, d);  

    return 0;
}

void zeroSmaller(int& num1, int& num2)
{
    cout <<left<< num1 << ", " << num2;
    if (num1 > num2)
    {
        num2 = 0;
    } else {
        num1 = 0;
    }
    
    cout <<right<< setw(10)<< num1 << ", " << num2 << endl;

}