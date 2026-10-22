
#include <iostream>
using namespace std;

double volume(double side)
{
    return side * side * side;
}

double volume(double length, double width, double height)
{
    return length * width * height;
}

double volume(double radius, int height)
{
    return 3.14159 * radius * radius * height;
}

int main()
{
    cout << "Volume of cube: " << volume(3.0) << endl;
    cout << "Volume of cuboid: " << volume(2.0, 3.0, 4.0) << endl;
    cout << "Volume of cylinder: " << volume(2.0, 5) << endl;

    return 0;
}
