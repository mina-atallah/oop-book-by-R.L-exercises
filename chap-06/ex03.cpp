#include <iostream>
using namespace std;
/*
    Create a class called time that has separate int member data for hours, minutes, and
    seconds. 
    One constructor should initialize this data to 0, and another should initialize it
    to fixed values. 
    Another member function should display it, in 11:59:59 format. 
    The final member function should add two objects of type time passed as arguments.
    A main() program should create two initialized time objects (should they be const?) and
    one that isn’t initialized. Then it should add the two initialized values together, leaving the
    result in the third time variable. Finally it should display the value of this third variable.
    Make appropriate member functions const


    Q- should they be const?
    A- since these both objects not meant to be modified or changed, then yes they should be const to ensure there values will not change.
*/
class Time
{
private:
    int hrs, mins, secs;
public:
    Time()
    {
        hrs = mins=secs = 0;
    }
    Time(int hours, int minutes, int seconds)
    {
        hrs = hours;
        mins = minutes;
        secs = seconds;
    }

    void display() const
    {

        cout << hrs << ':' << mins << ':' << secs << endl;
    }

    void addTime(Time t1, Time t2)
    {
        secs = t1.secs + t2.secs;
        if (secs > 59)
        {
            secs -= 60;
            mins++;
        }

        mins += t1.mins + t2.mins; 
        if (mins > 59)
        {
            mins -= 60;
            hrs++;
        }

        hrs += t1.hrs + t2.hrs; 
    }
};
int main()
{
    const Time time1(1, 59, 59); 
    const Time time2(4, 30, 30); 
    Time time3;

    time3.addTime(time1, time2);

    time3.display();

   return 0;
}