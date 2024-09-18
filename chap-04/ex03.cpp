 #include <iostream>
 using namespace std;
 /*
    Create a structure called Volume that uses three variables of type Distance (from the
    ENGLSTRC example) to model the volume of a room. 
    Initialize a variable of type Volume to specific dimensions, 
    then calculate the volume it represents, and print out the result.
    To calculate the volume, convert each dimension from a Distance variable to a variable
    of type float representing feet and fractions of a foot, and then multiply the resulting
    three numbers.
 */

struct stDistance
{
    int feet;
    float inches;
};

struct stVolume
{
    stDistance length;
    stDistance width;
    stDistance height;
};

 int main()
 {
    float l, w, h;
    stVolume room = {{16,6.5},{10,0.0}, {8, 1.75}};
    
    l = room.length.feet + (room.length.inches / 12.0);
    w = room.width.feet + (room.width.inches / 12.0);
    h = room.height.feet + (room.height.inches / 12.0);

    cout << "Volume is " << l * w * h << " cubic feet." << endl;
 
    return 0;
 }