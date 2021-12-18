// Nested for loop means a for loop inside a for loop

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << j;
        }
        cout << i << endl;
        ;
    }
    return 0;
}