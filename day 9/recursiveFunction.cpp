#include <iostream>
using namespace std;

void rec_fun(int x)
{
    //     if (x > 0)
    //     {
    //         rec_fun(x - 1);
    //         cout << x << endl; // prints 1 to 5
    //     }

    if (x > 0)
    {
        cout << x << endl; // prints  5 to 1
        rec_fun(x - 1);
    }
}
int main()
{
    int x = 5;
    rec_fun(x);
    return 0;
}