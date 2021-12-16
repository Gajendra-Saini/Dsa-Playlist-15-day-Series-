// prime numbers have two factors ,one it 1 and other itself number

#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "Not 

            prime " << endl;
    }
    return 0;
}