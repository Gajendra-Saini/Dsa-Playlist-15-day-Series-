//GCD means Greatest Common Divisier and it means it is the largest number that perfectly divide both the number

#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else if (n2 > n1)
        {
            n2 = n2 - n1;
        }
    }
    cout << n2 << endl;
    return 0;
}