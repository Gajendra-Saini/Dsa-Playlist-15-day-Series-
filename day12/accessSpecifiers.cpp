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
    void fun()
    {
        // a,b is accessable because it is it's own function but cann't use outside the class
        a = 10;
        b = 20;
        c = 30;
    }
};
int main()
{
    parent p;
    // p.a=1;// not accessable because it is private
    // p.b=2;// not accessable because it is protected
    p.c = 3; // accessable because it is public
    return 0;
}