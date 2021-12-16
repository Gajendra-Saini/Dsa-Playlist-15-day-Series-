// Reverse a number means if a number is 456 then it's reverse is 654

#include <iostream>
using namespace std;

int main()
{
    int num, x, y = 0;
    cin >> num;
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        y = y * 10 + x;
    }
    cout << y << endl;
    return 0;
}