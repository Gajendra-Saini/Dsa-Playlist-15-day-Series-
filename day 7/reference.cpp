// Reference is like sibling of that variable means it's doenn't occopu=y any value in programme but use as same as variable

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    // for (int i = 1; i < b; i++)
    // {
    //     cout << i << endl;
    // }
    // note that once reference is created then it cann't assign to another variable
    int c = 20;
    //  int &y=c; // gives error because y is assign to a before
    cout << &a << endl
         << &b << endl;

    return 0;
}