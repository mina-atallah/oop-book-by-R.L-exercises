#include <iostream>
#include <iomanip>
using namespace std;

/*
    Add a variable of type enum etype (see Exercise 6), 
    and another variable of type struct date (see Exercise 5) to the employee class of Exercise 4. 
    Organize the resulting pro-gram so that the user enters four items of information for each of three employees: 
    an employee number, the employee’s compensation, the employee type, and the date of first
    employment. 
    The program should store this information in three variables of type
    employee, and then display their contents.
*/

enum etype {
    laborer, secretary, manager, accountant, executive, researcher
};

struct stDate
{
    int day,month,year;
};

struct stEmployee 
{
    int number;
    unsigned int compensation;
    etype employee_type;
    stDate date_first_employment;
};

int main()
{
    stEmployee emp1,emp2,emp3;
    char letter;
    char slash;

    // input for employee 1
    cout << "Enter employee number: ";
    cin >> emp1.number;
    cout << "Enter employee compensation: ";
    cin >> emp1.compensation;
    cout << "Enter employee first date employment date M/D/Y: ";
    cin >> emp1.date_first_employment.month >> slash >> emp1.date_first_employment.day >> slash >> emp1.date_first_employment.year;
    cout << "Enter first letter of the title" << endl;
    cout << "(laborer, secretary, manager, " << endl << "accountant, executive, researcher): ";
    cin >> letter;
    switch (letter) {
        case 'l':
           emp1.employee_type = laborer;
            break;

        case 's':
           emp1.employee_type = secretary;
            break;

        case 'm':
           emp1.employee_type = manager;
            break;

        case 'a':
           emp1.employee_type = accountant;
            break;

        case 'e':
           emp1.employee_type = executive;
            break;

        case 'r':
           emp1.employee_type = researcher;
            break;

        default:
            cout << "There is no such title!";
            return 1;
    }
 
 
    // input for employee 2
    cout << "Enter employee number: ";
    cin >> emp2.number;
    cout << "Enter employee compensation: ";
    cin >> emp2.compensation;
    cout << "Enter employee first date employment date M/D/Y: ";
    cin >> emp2.date_first_employment.month >> slash >> emp2.date_first_employment.day >> slash >> emp2.date_first_employment.year;
    cout << "Enter first letter of the title" << endl;
    cout << "(laborer, secretary, manager, " << endl << "accountant, executive, researcher): ";
    cin >> letter;
    switch (letter) {
        case 'l':
           emp2.employee_type = laborer;
            break;

        case 's':
           emp2.employee_type = secretary;
            break;

        case 'm':
           emp2.employee_type = manager;
            break;

        case 'a':
           emp2.employee_type = accountant;
            break;

        case 'e':
           emp2.employee_type = executive;
            break;

        case 'r':
           emp2.employee_type = researcher;
            break;

        default:
            cout << "There is no such title!";
            return 1;
    }

    // input for employee 3
    cout << "Enter employee number: ";
    cin >> emp3.number;
    cout << "Enter employee compensation: ";
    cin >> emp3.compensation;
    cout << "Enter employee first date employment date M/D/Y: ";
    cin >> emp3.date_first_employment.month >> slash >> emp3.date_first_employment.day >> slash >> emp3.date_first_employment.year;
    cout << "Enter first letter of the title" << endl;
    cout << "(laborer, secretary, manager, " << endl << "accountant, executive, researcher): ";
    cin >> letter;
    switch (letter) {
        case 'l':
           emp3.employee_type = laborer;
            break;

        case 's':
           emp3.employee_type = secretary;
            break;

        case 'm':
           emp3.employee_type = manager;
            break;

        case 'a':
           emp3.employee_type = accountant;
            break;

        case 'e':
           emp3.employee_type = executive;
            break;

        case 'r':
           emp3.employee_type = researcher;
            break;

        default:
            cout << "There is no such title!";
            return 1;
    }
    
    cout << "_________________________________________________________________________" << endl;

/*____________________________________Printing Employees Content_____________________________________*/
   
    // printing employee 1 content
    cout << "Employee number is " << emp1.number << endl;
    cout << "Employee compensation is $" << emp1.compensation << endl;
    cout << "Empolyee first employment date is " << setfill('0') << setw(2) << emp1.date_first_employment.month << slash << setw(2) << emp1.date_first_employment.day << slash << emp1.date_first_employment.year  << endl;
    switch (emp1.employee_type) {
        case laborer:
            cout << "Employee type is laborer." << endl;
            break;

        case secretary:
            cout << "Employee type is secretary." << endl;
            break;

        case manager:
            cout << "Employee type is manager." << endl;
            break;

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
    
    cout << "----------------------------------------" << endl;
    
    // printing employee 2 content
    cout << "Employee number is " << emp2.number << endl;
    cout << "Employee compensation is $" << emp2.compensation << endl;
    cout << "Empolyee first employment date is " << setfill('0') << setw(2) << emp2.date_first_employment.month << slash << setw(2) << emp2.date_first_employment.day << slash << emp2.date_first_employment.year  << endl;
    switch (emp2.employee_type) {
        case laborer:
            cout << "Employee type is laborer." << endl;
            break;

        case secretary:
            cout << "Employee type is secretary." << endl;
            break;

        case manager:
            cout << "Employee type is manager." << endl;
            break;

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


    cout << "----------------------------------------" << endl;

    // printing employee 3 content
    cout << "Employee number is " << emp3.number << endl;
    cout << "Employee compensation is $" << emp3.compensation << endl;
    cout << "Empolyee first employment date is " << setfill('0') << setw(2) << emp3.date_first_employment.month << slash << setw(2) << emp3.date_first_employment.day << slash << emp3.date_first_employment.year  << endl;
    switch (emp3.employee_type) {
        case laborer:
            cout << "Employee type is laborer." << endl;
            break;

        case secretary:
            cout << "Employee type is secretary." << endl;
            break;

        case manager:
            cout << "Employee type is manager." << endl;
            break;

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
   
   return 0;
}