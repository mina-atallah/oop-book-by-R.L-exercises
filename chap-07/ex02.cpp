#include <iostream>
#include <string>
using namespace std;
/*
    Create a class called employee that contains a name (an object of class string) and an
    employee number (type long). 
    Include a member function called getdata() to get data from the user for insertion into the object, and another function called putdata() to display the data. Assume the name has no embedded blanks.
    Write a main() program to exercise this class. It should create an array of type employee,
    and then invite the user to input data for up to 100 employees. Finally, it should print out
    the data for all the employees.
*/
class Employee
{
private:
    string name;
    long number;

public:
    void getdata()
    {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee number: ";
        cin >> number;
    }

    void putdata()
    {
        cout << " Name: " << name << endl;
        cout << " Number: " << number << endl;    
    }
};
int main()
{
    Employee empArr[100];
    int num = 0;
    char choice;

    do
    {
        cout << "Enter data for employee number: " << num + 1 << endl;
        empArr[num++].getdata();

        cout << "Do you want to add another employee (y/n)? ";
        cin >> choice;

    } while (choice != 'n' && choice != 'N');

    int i = 0;
    while(i < num)
    {
        cout << "Employee " << i + 1 << " Info: " << endl;
        empArr[i].putdata();

        i++;
    }
    
   return 0;
}