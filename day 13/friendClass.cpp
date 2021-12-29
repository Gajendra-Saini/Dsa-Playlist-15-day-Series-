#include <iostream>
using namespace std;

class second;
class demo
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend second; // we have to declare before use it otherwise error will come
};
class second
{
    demo d;
    void func()
    {
        d.a = 10;
        d.b = 11;
        d.c = 12;
    }
};
int main()
{
    cout << "Run successfully";
    return 0;
}