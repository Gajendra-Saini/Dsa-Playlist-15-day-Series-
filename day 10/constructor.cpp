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
        if (l >= 0)
        {

            length = l;
        }
    }
    int setbreadth(int b)
    {
        if (b >= 0)
        {

            breadth = b;
        }
    }
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
    rectangle(rectangle(&rect)) // In this we just created a new rectangle
    {                           // copy constructor
        length = rect.length;   // we assign our rectangle length to the previous rectangle
        breadth = rect.breadth; // also we assign our breadth to previous
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return (2 * (length + breadth));
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

    rectangle r1(20);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    rectangle r2(r1); //giving him r1 rectangle values and it's input same as r1 rectangle
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;

    // Don't know why the below programme is giving me error

    rectangle r4;
    cout << r4.area() << endl;
    cout << r4.perimeter() << endl;

    return 0;
}