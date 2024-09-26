#include <iostream>
#include <conio.h>
using namespace std;
/*
   Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
   toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
   track of the number of cars that have gone by, and of the total amount of money collected.
   Model this tollbooth with a class called tollBooth. 
   The two data items are a type
   unsigned int to hold the total number of cars, and a type double to hold the total amount
   of money collected. A constructor initializes both of these to 0. 
   A member function called payingCar() increments the car total and adds 0.50 to the cash total. Another function,
   called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
   member function called display() displays the two totals. Make appropriate member
   functions const.
   Include a program to test this class. This program should allow the user to push one key
   to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
   cause the program to print out the total cars and total cash and then exit.
*/

class Tollbooth
{
private:
   unsigned int total_cars;
   double total_amount;
   const double toll = 0.50;

public:
   Tollbooth()
   {
      total_cars = 0;
      total_amount = 0.0;
   }
   void payingCar()
   {
      total_cars++;
      total_amount += toll;
   }
   void nopayCar()
   {
      total_cars++;
   }
   void display() const
   {
      cout << "Total cars = " << total_cars << endl;
      cout << "Total payments = " << total_amount << "$" << endl;
   }
};

const char ESC = 27; // ESC ASCII VALUE 

int main()
{
   Tollbooth tollbooth;
   char ch;

   cout << "0 for each non-paying car, " << endl
         << "1 for each paying car," << endl
         << "Esc to exist the program" << endl;


   do
      {
         ch = getch();

         if(ch == '0')
         {
            tollbooth.nopayCar();
         }
         if(ch == '1')
         {
            tollbooth.payingCar();
         }

      }while(ch != ESC);

   tollbooth.display();
   return 0;
}