#include <iostream>
using namespace std;

/*
    nest two inner loops, one to print spaces and one to print Xs, inside an outer
    loop that steps down the screen from line to line.

     ...x
     ..xxx
     .xxxxx
     xxxxxxx
*/
int main() {
    int height;
 

    cout << "Enter height of pyramid: ";
    cin >> height; // number of lines 

    int spaces = height - 1; // we start with number of space and decrement it with every iteration
    int X = 1; // we start with this number of Xs  and increment by 2 it with every iteration

   for(int i = 0; i < height; i++)
   {

        for(int s = 0; s < spaces; s++)
        {
            cout << " ";
        }

        for(int x = 0; x < X ; x++)   
        {
            cout << "X";
        } 

        cout << endl;
        spaces--;
        X+=2;
   }

   return 0;
}