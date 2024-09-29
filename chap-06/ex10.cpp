#include <iostream>
#include <iomanip>
using namespace std;
/*
    Create a class called ship that incorporates a ship’s number and location. Use the
    approach of Exercise 8 to number each ship object as it is created. Use two variables of
    the angle class from Exercise 7 to represent the ship’s latitude and longitude. A member
    function of the ship class should get a position from the user and store it in the object;
    another should report the serial number and position. 
    Write a main() program that creates three ships, asks the user to input the position of each, and then displays each ship’s
    number and position
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

    void display() const
    {
        // float would not print, so i tried to print as an integer, first the minutes, then the decimal part of it as another integer
        int wholeMinutes = static_cast<int>(min);
        float decimalMinutes = (min - wholeMinutes) * 10;

        // hexdecimal for degree symbol did not work with the compiler nor the encoding
        cout << deg << "°" << setfill('0') << setw(2) << wholeMinutes << '.' << static_cast<int>(decimalMinutes)  << '\'' << ' ' << dir << '.' << endl;

    }
};

class Ship
{
private: 
    static int created_ships;
    int ship_number;
    Angle latitude;
    Angle longitude;

public: 
    Ship() // default constructor is called when an object instance is created
    {
        created_ships++;
        ship_number = created_ships;
    }

    void setShipPosition()
    {
        cout << "Set position for ship " << ship_number << endl;
        latitude.setAngle();
        longitude.setAngle();
    }

    void display() const
    {
        cout << "(Ship Information)" << endl;
        cout << "Ship number: " << ship_number << endl;
        cout << "Ship Latitude ";
        latitude.display();
        cout << "Ship Longitude ";
        longitude.display();
    }
    
};

int Ship::created_ships = 0;

int main()
{
    Ship ship1,ship2, ship3;

    ship1.setShipPosition();
    ship2.setShipPosition();
    ship3.setShipPosition();

    cout << "_________" << endl;

    ship1.display();
    cout << "--------" << endl;
    ship2.display();
    cout << "--------" << endl;
    ship3.display();
   return 0;
}