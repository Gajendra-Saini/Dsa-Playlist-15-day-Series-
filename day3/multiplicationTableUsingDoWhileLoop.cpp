#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    cin >> num;
    do
    {
        cout << num << "*" << i << "=" << num * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}