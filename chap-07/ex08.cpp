#include <iostream>
using namespace std;
/*
    Another weakness of C++ is that it does not automatically check array indexes to see
    whether they are in bounds. (This makes array operations faster but less safe.)
    We can use a class to create a safe array that checks the index of all array accesses.
    Write a class called safearay that uses an int array of fixed size (call it LIMIT) as its
    only data member. There will be two member functions. The first, putel(), takes an
    index number and an int value as arguments and inserts the int value into the array at
    the index. The second, getel(), takes an index number as an argument and returns the
    int value of the element with that index.
    safearay sa1; // define a safearay object
    int temp = 12345; // define an int value
    sa1.putel(7, temp); // insert value of temp into array at index 7
    temp = sa1.getel(7); // obtain value from array at index 7
    Both functions should check the index argument to (make sure it is not less than 0 or
    greater than LIMIT-1.) You can use this array without fear of writing over other parts of
    memory.
    Using functions to access array elements doesn’t look as eloquent as using the [] 
    operator. In Chapter 8 we’ll see how to overload this operator to make our safearay
    class work more like built-in arrays.
*/
class safearay 
{
private:
    enum {LIMIT = 25};
    int arr[LIMIT];

    void initializ()
    {
        for(int i =0; i < LIMIT; i++)
        {
            arr[i] = 0;
        }
    }
public:
    safearay() {
        initializ();
    }

    void putel(int index, int val) 
    {
        if(index >= 0 && index <= LIMIT - 1)
        {
            arr[index] = val;

        } else {
            cout << "index is out of bounds!" << endl;
        }
    }

    int getel(int index)
    {
        if(index >= 0 && index <= LIMIT - 1)
        {
            return arr[index];
        }  
        else {
            cout << endl << "Incompatible index!" << endl;
        }
    }

    void show()
    {
        for(int i =0; i < LIMIT; i++)
        {
            cout << "pos "<< i << " =" << arr[i] << endl;
        }
    }

};
int main()
{
    safearay sa1; // define a safearay object
    int temp = 12345, index = 7; // define an int value and index;
    sa1.putel(index, temp); // insert value of temp into array at index 7
    temp = sa1.getel(index); // obtain value from array at index 7
    cout << endl;
    cout << "number at index "<< index  <<" = "  << temp << endl;
    index += 20;
    temp = sa1.getel(index); // obtain value from array at index 27
    cout << "number at index "<< index  <<" = "  << temp << endl;
 
    sa1.show();
   return 0;
}