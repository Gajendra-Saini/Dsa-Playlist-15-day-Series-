#include <iostream>
using namespace std;

int addfunc(int a, int b)
{
    if (b == 0)
    {
        throw 1;
    }
    return a / b;
}
int main()
{
    int a, b, c;
    try
    {
        c = addfunc(10, 2);
        cout << c << endl;
    }
    catch (int e)
    {
        cout << "DIvision by 0 not allowed here" << endl;
    }
    return 0;
}