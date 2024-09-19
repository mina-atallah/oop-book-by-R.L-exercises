#include <iostream>
using namespace std;
/*
    Create a structure called time. Its three members, all type int, should be called hours,
    minutes, and seconds. 
    Write a program that prompts the user to enter a time value in
    hours, minutes, and seconds. 
    This can be in 12:59:59 format, or each number can be
    entered at a separate prompt (“Enter hours:”, and so forth). The program should then
    store the time in a variable of type struct time, and finally print out the total number of
    seconds represented by this time value:
    long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds
*/
struct stTime
{
    int hours,minutes,seconds;
};

int main()
{
    stTime time;
    long total_sec = 0;    

    cout << "Enter hours: ";
    cin >> time.hours;
    cout << "Enter minutes: ";
    cin >> time.minutes;
    cout << "Enter seconds: ";
    cin >> time.seconds;

    total_sec = (time.hours* 3600) + (time.minutes * 60) + (time.seconds);

    cout << "total number of seconds is " << total_sec << endl;
   return 0;
}