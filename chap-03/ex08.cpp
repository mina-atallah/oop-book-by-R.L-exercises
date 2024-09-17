#include <iostream>
using namespace std;

/*
    Write a program that repeatedly asks the user to enter two money amounts expressed in
    old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
    Chapter 2, “C++ Programming Basics.”)  The program should then add the two amounts
    and display the answer, again in pounds, shillings, and pence. Use a do loop that asks the
    user whether the program should be terminated. 

    Typical interaction might be
    Enter first amount: £5.10.6
    Enter second amount: £3.2.6
    Total is £8.13.0
    Do you wish to continue (y/n)?
    To add the two amounts, you’ll need to carry 1 shilling when the pence value is greater
    than 11, and carry 1 pound when there are more than 19 shillings.
    */
int main() {
    
    int pounds_one, shillings_one, pence_one;
    int pounds_two, shillings_two, pence_two;
    int pounds_three, shillings_three, pence_three = 0;
    char dot;

    char choice;

    do
    {
        cout << " Enter first amount: £";
        cin >> pounds_one>>dot>>shillings_one>>dot>>pence_one;
        cout << " Enter second amount: £";
        cin >> pounds_two>>dot>>shillings_two>>dot>>pence_two;

        pence_three = pence_one + pence_two;
        shillings_three = shillings_one + shillings_two;
        pounds_three = pounds_one + pounds_two;


        if((pence_one + pence_two) >= 12) // parenthese came a couple of tries trying to find out what is wrong
        {
            pence_three -=12;
            shillings_three++;
        }

        if((shillings_one + shillings_two) >= 20)
        {
            shillings_three -= 20;
            pounds_three++;
        }

        cout << "Total is £" << pounds_three << "." << shillings_three << "." << pence_three << endl;

        cout << "Do you wish to continue (y/n)? ";
        cin >> choice;
    } while (choice != 'n' && choice != 'N');
        
   

   return 0;
}