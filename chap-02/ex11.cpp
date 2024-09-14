#include <iostream>
#include <iomanip>
using namespace std;

/*
        By default, output is right-justified in its field. You can left-justify text output using the
        manipulator setiosflags(ios::left). (For now, don’t worry about what this new notation
        means.) Use this manipulator, along with setw(), to help generate the following output:

        Last name   First name    Street address    Town         State
        ---------------------------------------------------------------
        Jones       Bernard       109 Pine Lane     Littletown   MI
        O’Brian     Coleen        42 E. 99th Ave.   Bigcity      NY
        Wong        Harry         121-A Alabama St. Lakeville    IL
*/
int main() {

    // to ensure better alignment after so many tries, we specify for each element a width (w = width)
    int f_name_w = 15;
    int l_name_w = 15;
    int address_w = 20;
    int town_w = 15;
    int state_w = 5;

    // table head
    cout << left << setw(l_name_w) << "Last Name" 
                << setw(f_name_w) << "First Name" 
                << setw(address_w) << "Street Address" 
                << setw(town_w) << "Town" 
                << setw(state_w) << "State" 
                << endl;

    // line
    cout << setfill('-') << setw(l_name_w) << "" 
        << setw(f_name_w) << "" 
        << setw(address_w) << "" 
        << setw(town_w) << "" 
        << setw(state_w) << "" 
        << setfill(' ') << endl;

    // person 1
    cout << left << setw(l_name_w) << "Jonas" << setw(f_name_w) << "Bernard" << setw(address_w) << "109 Pine Lane" << setw(town_w) << "Littletown" << setw(state_w) << "MI" << endl;

    // person 2 // there was a problem with O(’)Brian
      cout << left
         << setw(l_name_w) << "O'Brian"
         << setw(f_name_w) << "Coleen"
         << setw(address_w) << "42 E. 99th Ave."
         << setw(town_w) << "Bigcity"
         << setw(state_w) << "NY" << endl;

    // person 3
    cout << left << setw(l_name_w) << "Wong" << setw(f_name_w) << "Harry" << setw(address_w) << "121-A Alabama St." << setw(town_w) << "Lakeville" << setw(state_w) << "IL" << endl;

   return 0;
}

//     tries !!!!!
/*
    int width = 15;

    cout << left << setw(width) << "Last Name" << left << setw(width - 3) << "Firts Name" << left << setw(width) << "Street Address" << right << setw(width - 7) << "Town" << right << setw(width - 1) << "State" << endl;

    cout << "----------------------------------------------------------------" << endl;

    cout << left << setw(width) << "Jones" << left << setw(width - 3) << "Bernard" << left << setw(width - 2) << "109 Piple Lane" << right << setw(width) << "Littletown" << right << setw(width - 10) << "MI" << endl;

    cout << left << setw(width) << "O'Brian" << left << setw(width - 3) << "Coleen" << left << setw(width - 2) << "42 E. 00th Ave." << right << setw(width - 4) << "Bigcity" << right << setw(width - 7) << "NY" << endl;

    cout << left << setw(width) << "Wong" << left << setw(width - 3) << "Harry" << left << setw(width - 2) << "121-A Alabama St." << right << setw(width - 4) << "Lakeville" << right << setw(width - 9) << "IL" << endl;
*/