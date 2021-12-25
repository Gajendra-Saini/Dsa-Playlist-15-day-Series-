// We need constructors because there is some value in function before we declare it so we need to put some value in it

#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    int setlength(int l)
    {
        length = l;
        return 0;
    }
    int setbreadth(int m)
    {
        breadth = m;
        return 0;
    }
    // rectangle()
    // { // non paramatric constructor
    //     length = 0;
    //     breadth = 0;
    // }
    rectangle(int l = 0, int m = 0) // then we don't need non paramatric constructor because it's can handle both the cases
    {                               // paramatric constructor
        setlength(l);
        setbreadth(m);
    }
    // rectangle(rectangle(&rect))
    // { // copy constructor
    //     length = rect.length;
    //     breadth = rect.breadth;
    // }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    // int getlength()
    // {
    //     return length;
    // }
    // int getbreadth()
    // {
    //     return breadth;
    // }
};
int main()
{
    rectangle r(4, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    rectangle r1(10);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    return 0;
}