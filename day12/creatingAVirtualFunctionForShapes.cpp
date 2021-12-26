#include <iostream>
using namespace std;
class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};
class rectangle : public shape
{
private:
    float length;
    float breadth;

public:
    void getlength(float l)
    {
        length = l;
    }
    void getbreadth(float b)
    {
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};
class circle : public shape
{
private:
    float radius;

public:
    void getradius(float r)
    {
        radius = r;
    }
    float area()
    {
        return 3.14 * radius * radius;
    }
    float perimeter()
    {
        return 2 * 3.14 * radius;
    }
};
int main()
{
    shape *s;
    rectangle r;
    s = &r;
    r.getlength(10);
    r.getbreadth(5);
    cout << s->area() << endl;
    cout << s->perimeter() << endl;
    circle c;
    s = &c;
    c.getradius(10);
    cout << s->area() << endl;
    cout << s->perimeter() << endl;

    return 0;
}