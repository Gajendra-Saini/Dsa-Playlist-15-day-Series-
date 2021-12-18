/*the pattern looks like below

 1  2  3  4
 5  6  7  8 
 9 10 11 12
13 14 15 16

*/
#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}