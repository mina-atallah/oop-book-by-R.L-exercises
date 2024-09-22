#include <iostream>
using namespace std;
/*
   Repeat Exercise 8, but instead of two int variables, have the swap() function inter-change two struct time values (see Exercise 6)
*/
struct Time
{
    int hours, minutes, seconds;
};

void swapStructsValues(Time & time1, Time & time2)
{

/*
    int temp_hours, temp_minutes, temp_seconds =0;

    // swap hours
    temp_hours = time1.hours;
    time1.hours = time2.hours;
    time2.hours = temp_hours;

    // swap minutes
    temp_minutes = time1.minutes;
    time1.minutes = time2.minutes;
    time2.minutes = temp_minutes;

    // swap seconds
    temp_seconds = time1.seconds;
    time1.seconds = time2.seconds;
    time2.seconds = temp_seconds;
*/
    /*____Or_____*/
    // i think the second solutions is little better ;)
    
    Time temp;
    temp = time1;
    time1 = time2;
    time2 = temp;

};
int main()
{
    Time  time1 = {1,30,30};
    Time  time2 = {2,15,20};

    cout << "Before swapping" << endl;
    cout << "Time_1 value " << time1.hours << ':' << time1.minutes << ':' << time1.seconds << endl;
    cout << "Time_2 value " << time2.hours << ':' << time2.minutes << ':' << time2.seconds << endl;

    swapStructsValues(time1, time2);

    cout << "After swapping" << endl;
    cout << "Time_1 value " << time1.hours << ':' << time1.minutes << ':' << time1.seconds << endl;
    cout << "Time_2 value " << time2.hours << ':' << time2.minutes << ':' << time2.seconds << endl;
   return 0;
}