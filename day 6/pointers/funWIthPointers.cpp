#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    int **b = &p;

    cout << a << endl;   // this print 5
    cout << b << endl;   // this print address of p
    cout << p << endl;   // this print address of a
    cout << &a << endl;  // this print addres of a
    cout << &b << endl;  // this print address of b
    cout << &p << endl;  //  this print address of p
    cout << *b << endl;  // this print address of b
    cout << *p << endl;  // this print 5
    cout << **b << endl; // this print 5

    return 0;
}