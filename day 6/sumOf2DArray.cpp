// We are trying to add two array the necessery condition for that is the  array you want to add is same rows and coloms then you are able to add them

#include <iostream>
using namespace std;
int main()
{
    int a1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int a2[2][3] = {{1, 2, 4}, {5, 3, 4}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int a3[i][j];
            a3[i][j] = a1[i][j] + a2[i][j];
            cout << a3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}