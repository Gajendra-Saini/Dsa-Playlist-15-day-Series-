#include <iostream>
using namespace std;
class base
{

public:
    base()
    {
        cout << "Default base Cons" << endl;
    }
    base(int x)
    {
        cout << "para base cons" << x << endl;
    }
};
class inherit : public base
{

public:
    inherit()
    {
        cout << "Default inherit cons" << endl;
    }
    inherit(int y)
    {
        cout << "para inherit cons" << y << endl;
    }

    inherit(int x, int y) : base(x)
    {
        cout << "para inherit cons" << y << endl;
    }
};
int main()
{
    inherit a(5);
    inherit b(10, 5);

    return 0;
}