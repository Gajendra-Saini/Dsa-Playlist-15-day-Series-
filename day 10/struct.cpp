// struct in cpp is same as class only difference is that class when defined they are private and struct when defined they are public
#include <iostream>
using namespace std;

struct hello
{
    int a;
    int b;
    void hiii()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    hello s1;
    s1.a = 5;
    s1.b = 6;
    s1.hiii();

    return 0;
}
