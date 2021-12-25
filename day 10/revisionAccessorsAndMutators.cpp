#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    // these are called mutators
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    // these are called accessors because they help us to access data and print in
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
};
int main()
{
    rectangle r1;
    r1.setlength(10);
    r1.setbreadth(20);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    return 0;
}