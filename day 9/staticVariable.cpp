#include <iostream>
using namespace std;

// int a = 0; // global variable always in memory and access by every function
// void func()
// {
//     int b = 5; // local variable it destroyed when the function work is over
//     a++;
//     cout << a << " " << b << endl;
// }
// int main()
// {
//     func();
//     func();
//     func();
//     return 0;
// }

// now come with static part so the difference between global and static variable is that static variable is in the memory when the function is running but the global variable is in the memory and accessable by all the functions but static is accessable only by the funtion in that he is created

void fun()
{
    static int a = 0;
    int b = 5;
    a++;
    cout << a << " " << b << endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}