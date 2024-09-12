#include <iostream>
#include <iomanip> 
using namespace std;

/*
    generating a table
    1990.......135
    1991......7290
    1992.....11300
    1993.....16200

    dots -> whitespace
    could use setw() or just " " but for alignemnt we choose setw()
*/
int main()
{
    cout << 1990 << setw(9) << 135 << endl
          << 1991 << setw(9) << 7290 << endl
          << 1992 << setw(9) << 11300 << endl
          << 1993 << setw(9) << 16200 << endl;

    return 0;
}