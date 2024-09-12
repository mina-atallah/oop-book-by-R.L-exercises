#include <iostream>
using namespace std;

/*
    same integer producing different values using arithmetic assignment operator & decrement operator
*/
int main()
{
    int num = 10;

    cout << num << endl;

    num += 10 ;//arithmetic assignment operator to generate 20

    cout << num << endl
         << --num << endl; // decrement operator to generate genetrate 19


    return 0;
}