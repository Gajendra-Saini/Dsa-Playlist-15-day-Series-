#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int bredth;

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
    rectangle r1; //objects of the class
    r1.length = 10;
    r1.bredth = 20;
    cout << "area is :" << r1.area() << endl;
    cout << "perimeter is :" << r1.perimeter() << endl;

    return 0;
}