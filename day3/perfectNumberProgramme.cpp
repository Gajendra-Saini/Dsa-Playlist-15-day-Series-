//perfect number means sum of factors of that number is equal to twice of that number
#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            cout << i << endl;
        }
    }
    cout << sum << endl;
    if (2 * num == sum)
    {
        cout << "Perfect No" << endl;
    }
    else
    {
        cout << " Not Perfect No" << endl;
    }
    return 0;
}