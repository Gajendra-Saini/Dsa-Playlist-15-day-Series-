#include <iostream>
using namespace std;
int max_func(int x, int y, int z)
{
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
}
int main()
{
    int x, y, z;
    cout << "Enter three Numbers :" << endl;
    cin >> x >> y >> z;
    cout << "max is :" << max_func(x, y, z) << endl;

    return 0;
}