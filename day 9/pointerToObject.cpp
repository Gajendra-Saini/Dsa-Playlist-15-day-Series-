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
    rectangle r1; // there is not need to declare data type it can automatic occupy from class

    rectangle *ptr = &r1;

    ptr->length = 10;
    ptr->bredth = 20;
    cout << "area is :" << ptr->area() << endl;
    cout << "perimeter is :" << ptr->perimeter() << endl;

    return 0;
}