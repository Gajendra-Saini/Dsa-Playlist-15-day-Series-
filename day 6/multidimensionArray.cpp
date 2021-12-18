/*

Here one important fact that A[2][3] means that it is an
array with two rows and three colums 
like 
[1,2,3]
[5,6,7]

*/

#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{1, 2, 3}, {5, 4, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}