 #include <iostream>
 using namespace std;
 /*
    Create a structure called sterling that stores money amounts in the old-style British
    system discussed in Exercises 8 and 11 in Chapter 3, “Loops and Decisions.” The mem-
    bers could be called pounds, shillings, and pence, all of type int. The program should
    ask the user to enter a money amount in new-style decimal pounds (type double), con-
    vert it to the old-style system, store it in a variable of type struct sterling, and then
    display this amount in pounds-shillings-pence format.
 */

struct stSterling
{
    int pounds, shillings, pence;
};

int main()
{
    stSterling old_system_sterling;

    double decimal_pounds;
    cout << "Enter money amount: £";
    cin >> decimal_pounds;

    int total_pence = static_cast<int>(decimal_pounds * 240);// convert the decimal pounds to pence so we use to pounds.shillings.pence

    old_system_sterling.pounds = total_pence / 240; // get the pounds

    int  remaining_pence = total_pence % 240; // remaining pence (shillings & pence)

    old_system_sterling.shillings = remaining_pence / 12; // get the shillings
    old_system_sterling.pence = remaining_pence % 12; // final remaining pence

    cout << "Old system style is £" << old_system_sterling.pounds << '.' << old_system_sterling.shillings << '.' << old_system_sterling.pence << endl;
 
    return 0;
}