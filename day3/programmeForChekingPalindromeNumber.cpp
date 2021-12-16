// Plaindrome , A number is called palindrome if the reverse of that number is equal to that number

#include <iostream>
using namespace std;

int main()
{
    int num, x, y = 0, a;
    cin >> num;
    a = num;
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        y = 10 * y + x;
    }

    if (a == y)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is Not palindrome" << endl;
    }
    return 0;
}