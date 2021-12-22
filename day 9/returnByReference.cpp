#include <iostream>
using namespace std;
int &func(int &x)
{
    cout << x << endl;
    return x;
}
int main()
{
    int f = 20;
    func(f) = 50;      // here we can make func a variable with the help of reference see the magic below
    cout << f << endl; // see the value of f is updated with the help of function
    return 0;
}