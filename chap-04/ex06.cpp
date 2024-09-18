#include <iostream>
using namespace std;
/*
     We said earlier that C++ I/O statements don’t automatically understand the data types of
    enumerations. Instead, the (>>) and (<<) operators think of such variables simply as inte-
    gers. You can overcome this limitation by using switch statements to translate between
    the user’s way of expressing an enumerated variable and the actual values of the enumer-
    ated variable. For example, imagine an enumerated type with values that indicate an
    employee type within an organization:
    enum etype { laborer, secretary, manager, accountant, executive,
    researcher };
    Write a program that first allows the user to specify a type by entering its first letter
    (‘l’, ‘s’, ‘m’, and so on), then stores the type chosen as a value of a variable of type
    enum etype, and finally displays the complete word for this type.
    Enter employee type (first letter only)
    laborer, secretary, manager,
    accountant, executive, researcher): a
    Employee type is accountant.
    You’ll probably need two switch statements: one for input and one for output.
*/

enum etype {
    laborer, secretary, manager, accountant, executive, researcher
};

int main() {
    etype employee_type;
    char letter;

    cout << "Enter first letter of the title" << endl;
    cout << "(laborer, secretary, manager, " << endl << "accountant, executive, researcher): ";
    cin >> letter;

    switch (letter) {
        case 'l':
           employee_type = laborer;
            break;

        case 's':
           employee_type = secretary;
            break;

        case 'm':
           employee_type = manager;
            break;

        case 'a':
           employee_type = accountant;
            break;

        case 'e':
           employee_type = executive;
            break;

        case 'r':
           employee_type = researcher;
            break;

        default:
            cout << "There is no such title!";
            return 1;
    }

    switch (employee_type) {
        case laborer:
            break;
            cout << "Employee type is laborer." << endl;

        case secretary:
            break;
            cout << "Employee type is secretary." << endl;

        case manager:
            break;
            cout << "Employee type is manager." << endl;

        case accountant:
            cout << "Employee type is accountant." << endl;
            break;

        case executive:
            cout << "Employee type is executive." << endl;
            break;

        case researcher:
            cout << "Employee type is researcher." << endl;
            break;
    }
}