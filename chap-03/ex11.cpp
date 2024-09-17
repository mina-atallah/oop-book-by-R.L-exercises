#include <iostream>
using namespace std;

/*
    Create a three-function calculator for old-style English currency, where money amounts
    are specified in pounds, shillings, and pence. (See Exercises 10 and 12 in Chapter 2.)
    The calculator should allow the user to add or subtract two money amounts, or to multi-
    ply a money amount by a floating-point number. (It doesn’t make sense to multiply two
    money amounts; there is no such thing as square money. We’ll ignore division. Use the
    general style of the ordinary four-function calculator in Exercise 4 in this chapter.)
*/
int main() {
    
    int pounds_one, shillings_one, pence_one;
    int pounds_two, shillings_two, pence_two;
    int pounds_three, shillings_three, pence_three = 0;
    float multi_num;
    char dot;
    char oper;
    char choice;

    do
    {
        cout << " Enter first amount: £";
        cin >> pounds_one>>dot>>shillings_one>>dot>>pence_one;
          
        cout << "Enter operation (+,-,*): ";
        cin >> oper;

        if (oper == '*')
        {
            cout << "Enter Multiplication Number: ";
            cin >> multi_num;
        } else 
        {
            cout << " Enter second amount: £";
            cin >> pounds_two>>dot>>shillings_two>>dot>>pence_two;
        }

        switch (oper)
        {
        case '+':
        pence_three = pence_one + pence_two;
        shillings_three = shillings_one + shillings_two;
        pounds_three = pounds_one + pounds_two;

        if(pence_three >= 12) 
        {
            pence_three -=12;
            shillings_three++;
        }

        if(shillings_three >= 20)
        {
            shillings_three -= 20;
            pounds_three++;
        }

    cout << "Total is £" << pounds_three << "." << shillings_three << "." << pence_three << endl;            
        break;
        case '-':
        pence_three = pence_one - pence_two;
        shillings_three = shillings_one - shillings_two;
        pounds_three = pounds_one - pounds_two;

        if(pence_three < 0) 
        {
            pence_three +=12;
            shillings_three--;
        }

        if(shillings_three < 0)
        {
            shillings_three += 20;
            pounds_three--;
        }
        cout << "Result is £" << pounds_three << "." << shillings_three << "." << pence_three << endl;      
        break;
        case '*':
        int total_pence, remaining_pence = 0;

        // convert both amount to pence 
        total_pence = (pounds_one * 240) + (shillings_one * 12) + pence_one;

        total_pence = static_cast<int>(total_pence * multi_num);
  
        pounds_three = total_pence / 240;
        remaining_pence = total_pence % 240;
        shillings_three = remaining_pence / 12;
        pence_three = remaining_pence % 12;

        cout << "Result is £" << pounds_three << "." << shillings_three << "." << pence_three << endl;
        break;
        default:
            cout << "Other operations do not exist!";
            break;
        }


        cout << "Do you wish to continue (y/n)? ";
        cin >> choice;

    } while (choice != 'n' && choice != 'N');
        
   

   return 0;
}