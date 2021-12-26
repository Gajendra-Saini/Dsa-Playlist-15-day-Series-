// We have given a rectangle class you have to use this class and make a new class for cuboid and find the volume of cuboid

#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l = 0, int b = 0)
    {
        setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return (length * breadth);
    }
    int perimeter()
    {
        return (2 * (length + breadth));
    }
};
class cuboid : public rectangle
{
private:
    int height;

public:
    cuboid(int l = 0, int b = 0, int h = 0)
    {
        height = h;
        setlength(l);
        setbreadth(b);
    }
    int getheight()
    {
        return height;
    }

    int volume()
    {
        return (getheight() * getbreadth() * getlength());
    }
};

int main()
{
    rectangle r(5, 6);
    cout << r.getlength() << endl;
    cout << r.getbreadth() << endl;
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    cuboid c(2, 3, 4);
    cout << c.getlength() << endl;
    cout << c.getbreadth() << endl;
    cout << c.getheight() << endl;
    cout << c.volume() << endl;
    return 0;
}