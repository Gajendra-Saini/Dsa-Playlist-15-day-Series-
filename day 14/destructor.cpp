#include <iostream>
using namespace std;
// class demo
// {
// public:
//     demo()
//     {
//         cout << "constructor is called" << endl;
//     }
//     ~demo()
//     {
//         cout << "destructor is called" << endl;
//     }
// };
// int main()
// {
//     demo d; // both constructor and destructor is called
//     return 0;
// }

class demo
{
public:
    demo()
    {
        cout << "constructor is called" << endl;
    }
    ~demo()
    {
        cout << "destructor is called" << endl;
    }
};
void fun()
{
    demo *p = new demo();
    delete p; // if we delete memory then destructor is called
}
int main()
{
    fun(); // here only constructor is called because memory is created
    return 0;
}
