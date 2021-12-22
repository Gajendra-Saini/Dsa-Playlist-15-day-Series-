#include <iostream>
using namespace std;
int *func(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i * size;
    }
    cout << p << endl;
    return p;
}

int main()
{
    int *q = func(5);
    cout << q << endl; // it means p created in heap q also point to p so function returning address and that is stored in another pointer
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << endl;
    }

    return 0;
}