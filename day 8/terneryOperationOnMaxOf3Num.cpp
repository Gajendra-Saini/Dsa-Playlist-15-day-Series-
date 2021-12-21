#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << "max is :" << ((x > y && x > z) ? x : (y > z ? y : z)) << endl;
    return 0;
}