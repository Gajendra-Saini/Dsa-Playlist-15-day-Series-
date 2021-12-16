// A number is called prime number if it is divisible by 1 or itself

#include <iostream>
using namespace std;

int main()
{
    int num, temp = 0;
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            temp = 1;
        }
    }
    if (temp == 1)
    {
        cout << "Not Prime" << endl;
    }
    else
    {
        cout << "Prime" << endl;
    }
    return 0;
}
