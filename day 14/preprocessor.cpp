#include <iostream>
#define pi 3.1425
#define value 6
#ifndef value
#define value 5
#endif

#define fun(x) #x
using namespace std;

int main()
{
    cout << pi << endl;
    cout << value << endl;
    cout << fun(hello peter this is spiderman) << endl;
    return 0;
}