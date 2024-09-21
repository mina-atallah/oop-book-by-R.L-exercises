#include <iostream>
using namespace std;
/*
    Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” 
    Write a function called circarea() that finds the area of a circle in a similar way. It should take an argument of type float and return an argument of the same type.
    Write a main() func-tion that gets a radius value from the user, calls circarea(), and displays the result.
*/

float circarea(float radius);

int main()
{
    float rad;
    cout << "Enter radius of circle: ";
    cin >> rad;

    cout << "Area is " << circarea(rad) << endl;
    return 0;
}

float circarea(float radius)
{
    return radius * radius * 3.14150F;
}