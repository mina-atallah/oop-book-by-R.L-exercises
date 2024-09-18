#include <iostream>
using namespace std;

 /*
    A phone number, such as (212) 767-8900, can be thought of as having three parts: the
    area code (212), the exchange (767), and the number (8900). Write a program that uses a
    structure to store these three parts of a phone number separately. Call the structure
    phone. Create two structure variables of type phone. Initialize one, and have the user
    input a number for the other one. Then display both numbers. The interchange might
    look like this:
    Enter your area code, exchange, and number: 415 555 1212
    My number is (212) 767-8900
    Your number is (415) 555-1212
 */
 
 struct stPhone
 {
    int area_code;
    int exchange;
    int number;
 };

int main() {

    stPhone my_phone = {212,767,8900};
    stPhone user_phone;

    cout << "Enter your area code, exchange, and number: ";
    cin >> user_phone.area_code >> user_phone.exchange >> user_phone.number;

    cout << "My number is (" << my_phone.area_code << ") " << my_phone.exchange << "-" << my_phone.number << endl;
    cout << "Your number is (" << user_phone.area_code << ") " << user_phone.exchange << "-" << user_phone.number << endl;

    return 0;
}