#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    int **b = &p;
    cout << a << endl;
    cout << b << endl;
    cout << p << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &p << endl;
    cout << *b << endl;
    cout << *p << endl;
    cout << **b << endl;

    return 0;
}