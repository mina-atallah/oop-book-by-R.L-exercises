 #include <iostream>
 #include <iomanip>
 using namespace std;
 /*
    Use the time structure from Exercise 9, and write a program that obtains two time val-
    ues from the user in 12:59:59 format, stores them in struct time variables, converts
    each one to seconds (type int), adds these quantities, converts the result back to hours-
    minutes-seconds, stores the result in a time structure, and finally displays the result in
    12:59:59 format.

    1 hour = 60 min
    1 minunte = 60 seconds


 */
struct stTime
{
    int hours, minutes, seconds;
};
 int main()
 {
    stTime time1, time2, time;
    char col;
    long total_sec1, total_sec2, total_sec = 0;

    cout << "Enter time format (H:M:S) : ";
    cin >> time1.hours >> col >> time1.minutes >> col >> time1.seconds;
    cout << "Enter time format (H:M:S) : ";
    cin >> time2.hours >> col >> time2.minutes >> col >> time2.seconds;


    total_sec1 = (time1.hours* 3600) + (time1.minutes * 60) + (time1.seconds);
    total_sec2 = (time2.hours* 3600) + (time2.minutes * 60) + (time2.seconds);

    total_sec = total_sec1 + total_sec2;

    // convert total seconds into hours, minutes, seconds
    time.hours = (total_sec / 3600) % 12; // get hours, and the % 12 to keep it within 12 hours format
    int remaining_sec = total_sec % 3600; // get remaining seconds after getting the hours
    time.minutes = remaining_sec / 60; // convert remaining sec to minutes
    time.seconds = remaining_sec % 60; // the remaining seconds after extracting the minutes


    cout << setfill('0') << setw(2) << time.hours << col << setw(2)<< time.minutes << col << setw(2) << time.seconds;


    return 0;
 }