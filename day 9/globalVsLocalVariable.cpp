//Global variable is declared in code section (in the code section there is some space is reversed for global variable) and local variable is declared in stack memory
#include <iostream>
using namespace std;

int a = 2; // global variable
void func1()
{
    int b = 8; // local variable
    a += b;
    cout << a << endl;
}
void func2()
{
    a++;
    cout << a << endl;
}
int main()
{
    func1();
    func2();
    a += 5;
    cout << a;
    return 0;
}