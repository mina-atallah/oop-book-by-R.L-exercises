#include <iostream>
#include <iomanip>
using namespace std;
/*
    Extend the employee class of Exercise 4 to include a date class (see Exercise 5) and an
    etype enum (see Exercise 6 in Chapter 4). An object of the date class should be used to
    hold the date of first employment; that is, the date when the employee was hired. The
    etype variable should hold the employee’s type: laborer, secretary, manager, and so on.
    These two items will be private member data in the employee definition, just like the
    employee number and salary. You’ll need to extend the getemploy() and putemploy()
    functions to obtain this new information from the user and display it. These functions will
    probably need switch statements to handle the etype variable. Write a main() program that
    allows the user to enter data for three employee variables and then displays this data.
*/
class Date
{
private:
    int day, month, year;
public:
    Date()
    {
        month = day = year = 0;
    }

    void getdate()
    {
        char slash;
        cout << "Enter date format (MM/DD/YY): ";
        cin >> month >> slash>> day>> slash>> year;
    }
    void showdate() const
    {
        cout<< setw(2) << setfill('0')  << month << '/' << setw(2) << setfill('0') << day << '/' << setw(2) << setfill('0') << year << endl;    
    }
};

enum etype {
    none = -1,
    laborer, secretary, manager, accountant, executive, researcher
};

class Employee
{
private:
    int number;
    float compensation;
    Date employment_date;
    etype title;

    // get emploee title
    etype getEmployeeTitle() 
    {
    
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
                return none;

        }
            return employee_type;
    }

public:
    Employee()
    {
        number = 0;
        compensation = 0.0F;
    }

    void setEmpInfo()
    {
        cout << "Enter employee number: ";
        cin >> number;
        cout << "Enter employee compensation: $";
        cin >> compensation;
        
        title = getEmployeeTitle();
        employment_date.getdate();
    }

    void display() const
    {
        cout << "(Employee Info)" << endl;
        cout <<"Number: " << number << endl;
        cout <<"Compensation: $" << compensation << endl;

        cout << "Hiring Date: ";
        employment_date.showdate();

        cout << "Title: ";
        switch (title) {
            case laborer:     cout << "Laborer"; break;
            case secretary:   cout << "Secretary"; break;
            case manager:     cout << "Manager"; break;
            case accountant:  cout << "Accountant"; break;
            case executive:   cout << "Executive"; break;
            case researcher:  cout << "Researcher"; break;
            default:          cout << "None"; break;
        }
        cout << endl; 
    }
};

int main()
{
    Employee emp, emp2;
    emp.setEmpInfo();
    emp2.setEmpInfo();

    emp.display();
    emp2.display();

   return 0;
}