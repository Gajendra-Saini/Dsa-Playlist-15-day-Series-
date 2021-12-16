#include <iostream>
using namespace std;

int main()
{
    int i = 1, num;
    cin >> num;
    while (i < 11)
    {
        cout << num << "*" << i << "=" << num * i << endl;
        i++;
    }
    return 0;
}