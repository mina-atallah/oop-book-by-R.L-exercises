#include <iostream>
#include <iomanip>
using namespace std;
/*
    In ocean navigation, locations are measured in (degrees and minutes of latitude and longitude). 
    Thus if you’re lying off the mouth of Papeete Harbor in Tahiti, your location is 149 degrees 34.8 minutes west longitude, and 17 degrees 31.5 minutes south latitude. 
    This is written as 149°34.8’ W, 17°31.5’ S. 
    There are 60 minutes in a degree. (An older system also divided a minute into 60 seconds, but the modern approach is to use decimal minutes instead.) 
    Longitude is measured from 0 to 180 degrees, east or west from Greenwich, England, to the international dateline in the Pacific. Latitude is measured from 0 to 90
    degrees, north or south from the equator to the poles.
    Create a class angle that includes three member variables: an int for degrees, a float
    for minutes, and a char for the direction letter (N, S, E, or W). 
    This class can hold either a latitude variable or a longitude variable.
    Write one member function to obtain an angle value (in degrees and minutes) and a direction from the user, and a second to display the angle value in 179°59.9’ E format. 
    Also write a (three-argument) constructor. 
    Write a main() program that displays an angle initialized with the constructor, and then, within a
    loop, allows the user to input any angle value, and then displays the value. You can use
    the hex character constant ‘\xF8’, which usually prints a degree (°) symbol.
*/

class Angle
{
private:
    int deg;
    float min;
    char dir;

public:
    Angle(int degree, float minutes, char direction)
    {
        deg = degree;
        min = minutes;
        dir = direction;
    }

    Angle() : deg(0), min(0.0F), dir(' ') {}

    void setAngle()
    {
        cout << "Enter degree (0-180): ";
        cin >> deg;
        cout << "Enter minutes (0-59.9): ";
        cin >> min;
        cout << "Enter direction (N, S, E, or W): ";
        cin >> dir;
    }

    void display()
    {
        // float would not print, so i tried to print as an integer, first the minutes, then the decimal part of it as another integer
        int wholeMinutes = static_cast<int>(min);
        float decimalMinutes = (min - wholeMinutes) * 10;

        // hexdecimal for degree symbol did not work with the compiler nor the encoding
        cout << deg << "°" << setfill('0') << setw(2) << wholeMinutes << '.' << static_cast<int>(decimalMinutes)  << '\'' << ' ' << dir << '.' << endl;

    }
};

int main()
{
    Angle angle1(149, 34.8F, 'W');
    cout << "Angle: ";
    angle1.display();

    char choice;
    do
    {
        Angle angle2;
        angle2.setAngle();
        cout << "Angle ";
        angle2.display();

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y');
    
   return 0;
}
