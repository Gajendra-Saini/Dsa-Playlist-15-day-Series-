#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
//  float sum(int a,int b){ // this is invalid because you can't assign same function with just changing it's parameter
//      return a+b;
//  }

// int sum(float a,float b){ // this is valid one i guess
//     return a+b;
// }
float sum(float a, float b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << sum(10, 20) << endl;
    cout << sum(10.5f, 20.6f) << endl;
    cout << sum(10, 20, 5) << endl;
    return 0;
}