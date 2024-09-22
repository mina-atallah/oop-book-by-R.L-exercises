#include <iostream>
using namespace std;
/*
    Write a function that, when you call it, displays a message telling how many times it has
    been called: “I have been called 3 times”, for instance. Write a main() program that calls
    this function at least 10 times. Try implementing this function in two different ways.
    First, use a global variable to store the count. Second, use a local static variable. Which
    is more appropriate? Why can’t you use a local variable?
*/

/*
  int counts = 0; 
    // accessible through the whole program, which can lead to be changed somewhere else in the program, which could lead to bugs
*/ 

void functionCalls()
{
    static int counts = 0; // works too, but better for it is only accessible to this function and can not be changed some-where else in the program unlike global variables.
    // local variable without the static keyword, it will re-initialize the variable each time the function is called.

    counts++;
    cout << "I have been called " << counts << " time(s)" << endl;
}

int main()
{

    for(int i =0; i < 10; i++)
    {
        functionCalls();
    }

   return 0;
}