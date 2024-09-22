#include <iostream>
#include <iomanip>
using namespace std;
/*
    Start with the program from Exercise 11 in Chapter 4, “Structures,” which adds two struct time values. 
    Keep the same functionality, but modify the program so that it uses two functions. 
    The first, time_to_secs(), takes as its only argument a structure of type time, and returns the equivalent in seconds (type long). 
    The second function, secs_to_time(), takes as its only argument a time in seconds (type long), and returns a
    structure of type time.
*/
struct Time {
    int hours, minutes, seconds;
};

long time_to_secs(Time time)
{
    return (time.hours * 3600) + (time.minutes * 60) + time.seconds;
}

Time secs_to_time(long time_in_seconds) 
{
    Time time;


    // convert total seconds into hours, minutes, seconds
    time.hours = (time_in_seconds / 3600) % 12; // get hours, and the % 12 to keep it within 12 hours format
    int remaining_sec = time_in_seconds % 3600; // get remaining seconds after getting the hours
    time.minutes = remaining_sec / 60; // convert remaining sec to minutes
    time.seconds = remaining_sec % 60; // the remaining seconds after extracting the minutes

    return time;

};

int main()
{
    Time time1, time2;
    char colon;
    cout << "Enter time (format hh:mm:ss): ";
    cin >> time1.hours >> colon >> time1.minutes >> colon >> time1.seconds;

    long time_in_secs = time_to_secs(time1);

    time2 =secs_to_time(time_in_secs);

    cout << setfill('0') << setw(2) << time2.hours << colon << setw(2)<< time2.minutes << colon << setw(2) << time2.seconds;    
   return 0;
}