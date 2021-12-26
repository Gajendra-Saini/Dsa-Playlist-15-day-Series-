/*  types of inheritence given below


1.simple inheritence
2.herarical inheritence
3.multilevel inheritence
4.multiple inheritence

*/

// ways of inheritence given below

#include <iostream>
using namespace std;
class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funcparent()
    {
        a = 1;
        b = 2;
        c = 3;
    }
};
class child : public parent
{
    void funcchild()
    {
        // a = 4; // not accessable because it is private
        b = 5;
        c = 6;
    }
};
class grandchild : public child
{
    void funcgrandchild()
    {
        // a=7; // it is private so not accessable
        b = 8;
        c = 9;
    }
};
int main()
{
    child c;
    // c.a=10; // it is private in parent so not accessable
    // c.b=11;// it is protected in parent so not accessable
    c.c = 12;
    grandchild g;
    // g.a=13; // not accessable
    // g.b=14; // not accessable
    g.c = 16;
    parent p;
    // p.a=20;// private so not accessable
    // p.b=21;// protected so not accessable
    p.c = 22;

    return 0;
}