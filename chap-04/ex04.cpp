 #include <iostream>
 #include <iomanip>
 using namespace std;
 /*
    Create a structure called employee that contains two members: an employee number
    (type int) and the employee’s compensation (in dollars; type float). 
    Ask the user to fill in this data for three employees, 
    store it in three variables of type struct employee, and
    then display the information for each employee.
 */

struct stEmployee 
{
    int number;
    unsigned int compensation;
};

 int main()
 {
    stEmployee emp1,emp2,emp3 = {};
    
    cout << "Enter employee number, and compensation: ";
    cin >> emp1.number >> emp1.compensation;
    cout << "Enter employee number, and compensation: ";
    cin >> emp2.number >> emp2.compensation;
    cout << "Enter employee number, and compensation: ";
    cin >> emp3.number >> emp3.compensation;

    cout << right << setw(6) << "Number" << setw(16) << "Compensation" << endl;
    cout << right << setw(6) << emp1.number << setw(16) << emp1.compensation << endl;
    cout << right << setw(6) << emp2.number << setw(16) << emp2.compensation << endl;
    cout << right << setw(6) << emp3.number << setw(16) << emp3.compensation << endl;

    return 0;
 }