#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 2, c;
    try
    {
        if (b == 0)
        {
            throw 1;
        }
        c = a / b;
        cout << c << endl;
    }
    catch (int e)
    {
        cout << "Division by zero not allowed " << e << endl;
    }

    return 0;
}