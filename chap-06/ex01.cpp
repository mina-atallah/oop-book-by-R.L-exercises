#include <iostream>
using namespace std;
/*
    Create a class that imitates part of the functionality of the basic data type int. 
    Call the class Int (note different capitalization). 
    The only data in this class is an int variable.
    Include member functions to initialize an Int to 0, to initialize it to an int value, to dis-play it (it looks just like an int), and to add two Int values.
    Write a program that exercises this class by creating one uninitialized and two initialized
    Int values, adding the two initialized values and placing the response in the uninitialized
    value, and then displaying this result.
*/
class Int //(not the same as int)
{
private:
    int integer;

public:
    Int()
    {
        integer = 0;
    }
    Int(int value)
    {
        integer = value;
    }

    void add(Int a, Int b)
    {
        integer += (a.integer + b.integer);
    }

    void display()
    {
        cout << integer;
    }
};

int main()
{
    Int num1(2);
    Int num2;
    Int num3(3);
    num3.add(num1, num2);

    num3.display();
   return 0;
}