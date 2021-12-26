// Mutators are set functions and accessors are get functions
// we make data as private and functions as public

#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int bredth;

public:
    int setLength(int l)
    {
        length = l;
    }
    int setBredth(int m)
    {
        bredth = m;
    }
    int getLength()
    {
        return length;
    }
    int getBredth()
    {
        return bredth;
    }
    int area()
    {
        return length * bredth;
    }
    int perimeter()
    {
        return 2 * (length + bredth);
    }
};
int main()
{
    rectangle r1;
    r1.setLength(10);
    r1.setBredth(20);
    cout << "area is :" << r1.area() << endl;
    cout << "perimeter is :" << r1.perimeter() << endl;
    cout << "Length is :" << r1.getLength() << endl;
    cout << "Bredth is :" << r1.getBredth() << endl;

    return 0;
}