#include <iostream>
#include <iomanip>
using namespace std;
/*
    Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
    comprise an int for storing the employee number and a float for storing the employee’s
    compensation. Member functions should allow the user to enter this data and display it.
    Write a main() that allows the user to enter data for three employees and display it.
*/

class Employee
{
private:
    int number;
    float compensation;
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
    }

    void display() const
    {
        cout << "Employee Info: " << endl;
        cout << left << setw(6) << "Number" << right <<setw(25) << "Compensation" << endl;
        cout << right << setw(5) << number << setw(15) << "$"<< fixed << setprecision(2) << compensation<< endl;

    }
};
int main()
{
    Employee emp1, emp2;
    emp1.setEmpInfo();
    emp2.setEmpInfo();
    cout << "______" << endl;
    emp1.display();
    cout << "______" << endl;
    emp2.display();

   return 0;
}