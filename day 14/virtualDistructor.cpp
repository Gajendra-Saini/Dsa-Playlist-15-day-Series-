#include <iostream>
using namespace std;
// class base
// {
// public:
//     base()
//     {
//         cout << "Base class constructor" << endl;
//     }
//     ~base()
//     {
//         cout << "Base class distructor" << endl;
//     }
// };
// class derived : public base
// {
// public:
//     derived()
//     {
//         cout << "Derived class constructor" << endl;
//     }
//     ~derived()
//     {
//         cout << "Derived class distructor" << endl;
//     }
// };
// int main()
// {
//     derived d; // firstly base class constructor is called then derived class constructor is called then derived class distructor is called then base class destructor is called means that constructor and distructor are opposite of each other when they are called one is to create and other is to destroy objects
//     return 0;
// }

class base
{
public:
    base()
    {
        cout << "Base class constructor" << endl;
    }
    ~base()
    {
        cout << "Base class distructor" << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "Derived class constructor" << endl;
    }
    ~derived()
    {
        cout << "Derived class distructor" << endl;
    }
};
int main()
{
    base *p = new derived(); // this will call base class distructor but it called derived class distructor so we make base distructor as virtual
    delete p;
    return 0;
}