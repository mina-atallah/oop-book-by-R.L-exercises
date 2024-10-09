#include <iostream>
using namespace std;
/*
    Start with a program that allows the user to input a number of integers, and then stores
    them in an int array. Write a function called maxint() that goes through the array,
    element by element, looking for the largest one. The function should take as arguments
    the address of the array and the number of elements in it, and return the index number of
    the largest element. The program should call this function and then display the largest
    element and its index number. (See the SALES program in this chapter.
*/


int maxint(int* arr, const int size)
{
    int maxNum = -1;
    int maxIndex;

    for(int i =0; i < size; i++)
    {
        if(maxNum < arr[i])
        {
            maxNum = arr[i];
            maxIndex = i;
        }
    }

    return maxIndex;
};


int main()
{
    const int SIZE = 50;
    int nums[SIZE];
    int count;

    cout << "Enter number of integers (Max " << SIZE << "): ";
    cin >> count;

    if (count <= 0 || count > SIZE) 
    {
        cout << "Please enter a number larger than 0 and not exceeding " << SIZE << "." << endl;
        return 1;
    }

    for(int i=0; i < count; i++)
    {
        nums[i] = (i + 1) * 3;
    }

    for(int i=0; i < count; i++)
    {
        cout << i << '=' << nums[i] << endl;
    }
    cout << "-----------" << endl;

    int maxIndex = maxint(nums, count);

    cout << maxIndex << endl;

   return 0;
}