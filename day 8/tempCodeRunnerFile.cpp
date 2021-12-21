#include <iostream>
using namespace std;

void call_addr(int *a, int *b)
{
    // we have taken pointer as to store values
    cout << a << " " << b << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << a << " " << b << endl;
}
int main()
{
    int x, y;
    cout << "Enter  2 values :" << endl;
    cin >> x >> y;
    call_addr(&x, &y); // giving address as input to the other func
    cout << x << " " << y << endl;
    return 0;
}