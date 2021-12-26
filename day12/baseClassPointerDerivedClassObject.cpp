#include <iostream>
using namespace std;
class base
{
public:
    void fun1()
    {
        cout << " fun1 of base" << endl;
    }
};
class derived : public base
{
public:
    void fun2()
    {
        cout << " fun2 of derived";
    }
};
int main()
{
    derived d;
    base *p = &d; // base class pointer to derived class object
    p->fun1();
    // p->fun2(); // gives error because base class pointer only get base class function
    // base b;
    // derived *p = &b; // invalid conversion
    // p->fun1();

    return 0;
}