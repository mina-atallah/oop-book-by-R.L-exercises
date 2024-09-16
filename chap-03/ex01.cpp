#include <iostream>
#include <iomanip>
using namespace std;

/*
    Assume that you want to generate a table of multiples of any given number. Write a pro-gram that allows the user to enter the number and then generates the table, formatting it
    into 10 columns and 20 lines. Interaction with the program should look like this (only the
    first three lines are shown):

        Enter a number: 7
        7 14 21 28 35 42 49 56 63 70
        77 84 91 98 105 112 119 126 133 140
        147 154 161 168 175 182 189 196 203 210

        20 * 10 = 200 (total iterations)

        once num*i % 10 == 0 -> print endl;
*/
int main() {

    int num;

   cout << "Enter a number: ";
   cin >> num;

    for(int i = 1; i <= 200; i++)
    {
    
        cout << setw(5) << num * i << " ";

        if(i % 10 == 0) // after ten columns print endl;
            cout << endl;

        if(num * i == 210) // condition to print the table on specific number (will be changed when there is better solution :) )
            break;
    }

   return 0;
}