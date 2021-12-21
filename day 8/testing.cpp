#include <iostream>
using namespace std;

int main()
{
    int x = 4, y = 6, z = 20;
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
    cout << "nt woekd";
    return 0;
}