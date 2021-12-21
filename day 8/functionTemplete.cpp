// Function templete useful when we have to use more then one same function in our programme so instead of typing them seperately we make a templete of that two function and use it
#include <iostream>
using namespace std;

template <class hello>
hello func(hello a, hello b)
{
    return a > b ? a : b;
}
// insted of typing two function like this we can make a templete of their

// int func(int a, int b)
// {
//     return a > b ? a : b;
// }
// float func(float a, float b)
// {
//     return a > b ? a : b;
// }

int main()
{
    cout << func(10, 20) << endl;
    cout << func(10.5f, 20.6f) << endl;
    cout << func(10.6, 20.8) << endl;
    cout << func("hiii", "yours") << endl;

    return 0;
}