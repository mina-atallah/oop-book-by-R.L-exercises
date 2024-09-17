#include <iostream>
using namespace std;

/*
   Write another version of the program from Exercise 7 so that, instead of finding the final
   amount of your investment, you tell the program the final amount and it figures out how
   many years it will take, at a fixed rate of interest compounded yearly, to reach this
   amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
   years; use an integer value for the year.)
*/
int main() {

   float initial_amount ,final_amount, interest_rate;
   int number_years = 0;

   cout << "Enter initial amount: ";
   cin >> initial_amount;
   cout << "Enter final amount: ";
   cin >> final_amount;
    cout << "Enter interest rate (percent per year): ";
    cin >> interest_rate;


   if (initial_amount >= final_amount) 
   {
         cout << "The initial amount is already greater than or equal to the final amount." << endl;
         return 0;
   }

   interest_rate = interest_rate / 100;

   
   while (initial_amount < final_amount) 
   {
      initial_amount += (initial_amount * interest_rate); // untill amount reachs final_amount the loop will break base on the condition 
      number_years++;
   }

   cout << "Number of years " << number_years <<" to reach " << final_amount << " with inetrest rate " << interest_rate * 100 << "%" << endl;
   

    


   return 0;
}