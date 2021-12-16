// Display digit means let's a number is 567 then its digits is 7,6,5 will be printed

#include <iostream>
using namespace std;

int main()
{
    int num, y;
    cin >> num;
    while (num > 0)
    {
        y = num % 10;   // giving us value
        num = num / 10; //making number smaller
        cout << y << endl;
    }
    return 0;
}