#include <iostream>
#include <cstring>
using namespace std;
/*
    Write a function called reversit() that reverses a C-string (an array of char). Use a for
    loop that swaps the first and last characters, then the second and next-to-last characters,
    and so on. The string should be passed to reversit() as an argument.
    Write a program to exercise reversit(). The program should get a string from the user,
    call reversit(), and print out the result. Use an input method that allows embedded
    blanks. Test the program with Napoleon’s famous phrase, “Able was I ere I saw Elba.”
*/
void reversit(char str[]) {
    int length = strlen(str);

    for(int i =0; i < length/2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
};

int main()
{
    const int maxSize = 80;
    char str[maxSize];

    cout << "Enter a string: ";
    cin.get(str, maxSize);

    reversit(str);

    cout << "Reversed string is: " << str << endl;

   return 0;
}