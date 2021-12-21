// Call by value means that we have change other variable by using our variable but our variable not modified and other variable modified

#include <iostream>
using namespace std;

void call_value(int a, int b)
{
    cout << a << " " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main()
{
    int x, y;
    cout << "Enter 2 values:" << endl;
    cin >> x >> y;
    call_value(x, y);
    cout << x << " " << y << endl;

    return 0;
}
