// factors of 5 is 5 and 1 like that factors is that how many time be brake a number in is subparts like 8 factors 2,4,8,1 .
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    cout << "factors IS:" << endl;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
        }

    return 0;
}