#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a; // p stores addresss 0f a and this is cool
    cout << a << endl;
    cout << p << endl;
    cout << &a << endl;
    cout << *p << endl;
    cout << &p << endl;

    return 0;
}