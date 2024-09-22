#include <iostream>
using namespace std;
/*
   Write a function called swap() that interchanges two int values passed to it by the call-ing program.
   (Note that this function swaps the values of the variables in the calling pro-gram, not those in the function.) 
    You’ll need to decide how to pass the arguments. 
    Createa main() program to exercise the function.
*/

void swap(int & num1, int & num2)
{
    cout << "Before swapping: " << "(" << num1 << ", " << num2 << ")" << endl;

    int temp =0;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping: " << "(" << num1 << ", " << num2 << ")" << endl;

};
int main()
{
    int num1 = 2, num2 = 3;

    swap(num1, num2);

   return 0;
}