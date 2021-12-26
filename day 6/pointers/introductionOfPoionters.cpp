// Pointers is used to store address

#include <iostream>
using namespace std;

int main()
{
    int a = 10;         // a variable
    int *p;             // a pointer declaration
    p = &a;             // p is storing address of a
    cout << a << endl;  // this print value of a that is 10
    cout << p << endl;  // this print address of a
    cout << *p << endl; // this print value of a that is 10
    cout << &p << endl; // this print address of p
    cout << &a << endl; // this print address of a that is value of p
    return 0;
}