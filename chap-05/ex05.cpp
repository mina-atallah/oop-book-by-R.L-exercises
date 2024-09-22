#include <iostream>
using namespace std;
/*
    Write a function called hms_to_secs() that takes three int values—for hours, minutes,
    and seconds—as arguments, and returns the equivalent time in seconds (type long).
    Create a program that exercises this function by repeatedly obtaining a time value in
    hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
    displaying the value of seconds it returns.
*/

long hms_to_secs(int hours, int minutes, int seconds)
{
    return (hours * 3600)+(minutes * 60) + seconds;
}

int main()
{
    int hours, minutes, seconds;
    char colon;
    cout << "Enter time (format hh:mm:ss): ";
    cin >> hours >> colon >> minutes >> colon >> seconds;

    long total_secs = hms_to_secs(hours, minutes, seconds);

    cout << "Total seconds = " << total_secs << endl;
   return 0;
}