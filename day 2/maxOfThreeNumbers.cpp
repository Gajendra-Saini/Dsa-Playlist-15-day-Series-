#include <iostream>
using namespace std;
typedef int num;
int main()
{
    num a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << "is greater" << endl;
    }
    else if (b > c)
    {
        cout << b << "is greater" << endl;
    }
    else
    {
        cout << c << "is greater" << endl;
    }
    return 0;
}