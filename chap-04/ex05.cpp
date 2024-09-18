 
#include <iostream>
#include <iomanip>
using namespace std;
 
 /*
    Create a structure of type date that contains three members: the month, the day of the
    month, and the year, all of type int. 
    (Or use day-month-year order if you prefer.) 
    Have the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
    then retrieve the values from the variable and print them out in the same format.
 */
struct stDate
{
    int day,month, year;
};

int main()
{
 
    stDate date;
    char f_slash;
     
    cout << "Enter a date in the format M/D/Y: ";
    cin >> date.month >> f_slash>>date.day >> f_slash >> date.year;


    cout << setfill('0') << setw(2) << date.month << f_slash << setw(2) << date.day << f_slash << date.year << endl;

    return 0;
}