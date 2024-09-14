#include <iostream>
#include <iomanip>
using namespace std;

/*
    When a value is smaller than a field specified with setw(), the unused locations are, by
    default, filled in with spaces. The manipulator setfill() takes a single character as an
    argument and causes this character to be substituted for spaces in the empty parts of a
    field. Rewrite the WIDTH program so that the characters on each line between the location
    name and the population number are filled in with periods instead of spaces, as in
    Portcity.....2425785

*/
int main() {

    int alexandriaPop = 6100000, londonPop = 8982000, arizonaPop = 101733;

    int width = 12;

    cout << setfill('.') << left << setw(width) << "City" << right << setw(width) << "Population" << endl;
    cout << setfill('.') << left << setw(width) << "Alexandria" << right << setw(width) << alexandriaPop << endl;
    cout << setfill('.') << left << setw(width) << "London" << right << setw(width) << londonPop << endl ;
    cout << setfill('.') << left << setw(width) << "Arizona" << right << setw(width) << arizonaPop << endl ;
    cout << setfill('.') << left << setw(width) << "Home" << right << setw(width) << 4 << endl ;




   return 0;
}