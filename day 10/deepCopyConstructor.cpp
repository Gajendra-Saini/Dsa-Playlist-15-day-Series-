#include <iostream>
using namespace std;
class hello
{
    int a;
    int *p;
    hello(int x)
    {
        a = x;
        p = new int[a];
    }
    hello(hello &t)
    {
        a = t.a;
        p = new int[a];
    }
};
int main()
{

    return 0;
}