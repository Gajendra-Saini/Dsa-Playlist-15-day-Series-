#include <iostream>
using namespace std;
class first
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend void func(); // if we declare func as friend that we can access private and protected variable
};
void func()
{
    first f;
    f.a = 10; // not accessable due to privte in class
    f.b = 11; // not accessabale due to protected in class
    f.c = 12; // accessable due to public in class
}
int main()
{

    return 0;
}