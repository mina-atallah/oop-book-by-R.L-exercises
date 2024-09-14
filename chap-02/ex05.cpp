#include <iostream>
#include "ctype.h"
using namespace std;

int main() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if(islower(letter))
    {
        cout << "letter "<< (letter) << " is lowercase";
        return 0;
    }
    else
    {
        cout << "letter "<< (letter) << " is uppercase or not a letter";
        return 1;
    }

}