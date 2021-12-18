// Multiplication of two matrices is done if the rows of matrice one is equal to column of second matrice or vice versa

#include <iostream>
using namespace std;

int main()
{
    int r2, c2, r1, c1;
    cout << "Enter first matrix Rows and colums:\n";
    cin >> r1 >> c1;
    int first[r1][c1];
    cout << "first Matrix :\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter " << i << " " << j << " Element :";
            cin >> first[i][j];
        }
    }
    cout << "Enter second matrix Rows and colums:\n";
    cin >> r2 >> c2;
    int second[r2][c2];
    cout << "first Matrix :\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter " << i << " " << j << " Element :";
            cin >> second[i][j];
        }
    }
    // if (b != x)
    // {
    //     cout << "First matrix colume and second matrix rows must be same ";
    // }
    // else
    // {
    // }
    int result[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++) // b and x must be equal
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    cout << "Result is :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//  After taking 2hrs and lost in for loop need
//             Respect++ :)
