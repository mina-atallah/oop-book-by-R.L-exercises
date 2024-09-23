#include <iostream>
using namespace std;
/*
    Write a program, based on the sterling structure of Exercise 10 in Chapter 4, 
    that obtains from the user two money amounts in old-style British format (£9:19:11), 
    adds them, 
    and displays the result, again in old-style format. 
    Use three functions. 
    The first should obtain a pounds-shillings-pence value from the user and return the value as a
    structure of type sterling. 
    The second should take two arguments of type sterling and return a value of the same type, which is the sum of the arguments. 
    The third should take a sterling structure as its argument and display its value.
*/

// struct
struct stSterling
{
    int pounds, shillings, pence;
};

// first-function
stSterling getSterling()
{
    stSterling sterling = {};
    char colon;

    cout << "Enter sterling, format(£9:19:11): £";
    cin >> sterling.pounds >> colon>> sterling.shillings >> colon>> sterling.pence;

    return sterling;
};

// second-function
stSterling getSum(const stSterling& str1, const stSterling& str2)
{
    stSterling sterling  = {};
    char colon;
        sterling.pence = str1.pence + str2.pence;
        sterling.shillings = str1.shillings + str2.shillings;
        sterling.pounds = str1.pounds + str2.pounds;

        // code from ex08 chap-03 
        if((str1.pence + str2.pence) >= 12)
        {
            sterling.shillings += sterling.pence / 12; // Add whole shillings (not just one, but check how many full shillings in pence)
            sterling.pence %= 12; // remainder pence
        }

        if((str1.shillings + str2.shillings) >= 20)
        {
            sterling.pounds += sterling.shillings / 20; // Add whole pounds
            sterling.shillings %= 20; // remainder shillings
        }

    return sterling;
};

// third-function
void printSterling(const stSterling & sterling)
{
    cout << "Sum is £" << sterling.pounds << '.' << sterling.shillings << '.' << sterling.pence << endl;
}

int main()
{
    // Get Sterlings
    stSterling s1 = getSterling();
    stSterling s2 = getSterling();

    // Sum
    stSterling s3 = getSum(s1, s2);

    // Print s3 (sum of s1 & s2)
    printSterling(s3);


    return 0;
}