// We want to print pattern that is given below
/*

       *
     * *
   * * *
 * * * *
 
 */
#include <iostream>
using namespace std;

int main()
{
    int line;
    cout << "Enter line :";
    cin >> line;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line; j++)
        {
            if ((i + j) >= (line - 1))
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}