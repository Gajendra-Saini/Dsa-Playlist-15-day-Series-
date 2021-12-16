// A number is called armstrong number if the sum of cube of digits of that number is equal to that number

#include <iostream>
using namespace std;

int main()
{
    int num, x, temp, sum = 0;
    cin >> num;
    temp = num;
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        sum += x * x * x;
    }

    if (sum == temp)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
    return 0;
}