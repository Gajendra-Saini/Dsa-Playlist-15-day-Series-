#include <iostream>
using namespace std;
class base
{
public:
    virtual void fun() // if we didn't make it virtual then it is called
    {
        cout << " fun of base" << endl;
    }
};
class derived : public base
{
public:
    void fun()
    {
        cout << " fun of derived";
    }
};
int main()
{
    derived d;
    base *p = &d;
    p->fun();
    return 0;
}