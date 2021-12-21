#include <iostream>
using namespace std;
int func_default(int x, int y, int z = 0)
{
    return x + y + z;
}

int main()
{
    cout << func_default(5, 6, 7) << endl;
    cout << func_default(5, 6) << endl; // passing two values and it take z=0 as default value
    return 0;
}