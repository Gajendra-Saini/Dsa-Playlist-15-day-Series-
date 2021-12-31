#include <iostream>
using namespace std;
namespace first
{
    void fun()
    {
        cout << "first function" << endl;
    }
}
namespace second
{
    void fun()
    {
        cout << "second function" << endl;
    }
}
using namespace first;
int main()
{
    first::fun();
    return 0;
}