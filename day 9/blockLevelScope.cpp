#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    cout << a << endl;
    {
        int a = 0;
        a++;
        cout << a << endl; // this is only exicute in block only
    }
    cout << a << endl;
    return 0;
}