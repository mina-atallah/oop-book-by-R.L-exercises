#include <iostream>
#include <iomanip>
using namespace std;
/*
    Start with the date structure in Exercise 5 in Chapter 4 and transform it into a date
    class. 
    Its member data should consist of three ints: month, day, and year. 
    It should also have two member functions: getdate(), which allows the user to enter a date in
    12/31/02 format, and showdate(), which displays the date.
*/
class Date
{
private:
    int day, month, year;
public:
    Date()
    {
        month = day = year = 0;
    }
    void getdate()
    {
        char slash;
        cout << "Enter date format (MM/DD/YY): ";
        cin >> month >> slash>> day>> slash>> year;
    }
    void showdate()
    {
        cout<< setw(2) << setfill('0')  << month << '/' << setw(2) << setfill('0') << day << '/' << setw(2) << setfill('0') << year << endl;
    }
};
int main()
{
    Date date1;
    date1.getdate();
    date1.showdate();
   return 0;
}