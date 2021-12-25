// We need constructors because there is some value in function before we declare it so we need to put some value in it

#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int length, int breadth)
    {
        this->length = length; // here is compiler is confused which thing assign to which thing
        this->breadth = breadth;
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return (2 * (length + breadth));
    }
};
int main()
{
    rectangle r(4, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    return 0;
}