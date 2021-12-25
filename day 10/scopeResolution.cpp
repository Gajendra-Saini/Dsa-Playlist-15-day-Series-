// Benifiet of scope resolution is that it generate sepeate code for that other then main function. It is completely seperately from main function so benifiet of this is that you can write complex function inside it

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
    rectangle(int l = 0, int m = 0)
    {

        setlength(l);
        setbreadth(m);
    }
    int area() // inline function
    {
        return length * breadth;
    }
    int perimeter();
};
int rectangle::perimeter() // this is called scope resolution meathod or not inline function
{
    return 2 * (length + breadth);
}
int main()
{
    rectangle r(5, 6);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    return 0;
}