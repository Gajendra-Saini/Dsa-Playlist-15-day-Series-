#include <iostream>
using namespace std;

int main()
{
    int a[5]{10, 2, 3, 4, 5};
    int *p = a, *q = &a[4];
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &a << endl;
    // cout << p[1] << endl;
    // cout << a[1] << endl;

    // Pointer Airthmatic

    // cout << *p << endl;
    // p++;
    // cout << *p << endl;
    // p += 1;
    // cout << *p << endl;
    // p--;
    // cout << *p << endl;
    // p -= 1;
    // cout << *p << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << endl; display the values of array a
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p + i << endl; // address of all the elements
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p << endl; // address of a[0]
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << i[a] << endl; // display value of array a
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *(p + i) << endl; // dispaly value of a
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << (a + i) << endl; // display address of a
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *p << endl; // display value of a
    //     p++;
    // }
    cout << p << endl;
    cout << q << endl;
    cout << p - q << endl; // here p store address of "a[0]=10" and w store address of "a[4]=5"so p-q display difference between then or the array elements between them
    cout << q - p << endl;
    cout << (p[4] - p[0]) << endl;
    return 0;
}