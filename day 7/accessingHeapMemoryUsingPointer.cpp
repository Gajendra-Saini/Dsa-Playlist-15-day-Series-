// If you want to create array in heap use new keyword

#include <iostream>
using namespace std;

int main()
{
    // int *p = new int[]; // this not work because  you didn't give size to that int that is required
    // int *p = new int[5]; // this works fine
    // p[0] = 10;
    // p[2] = 20;
    // cout << p[0] << endl;
    // delete[] p;
    // p = nullptr;
    // int size;
    // cout << "Enter size :";
    // cin >> size;

    // int *a = new int[size];
    // cout << "Enter size :";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> a[size];
    // }
    // {
    //     for (int i = 0; i < size; i++)
    //         cout << a[size] << endl;
    // }
    // cout << "Enter size :";
    // cin >> size;
    // a = new int[size];
    // {
    //     for (int i = 0; i < size; i++)
    //         cin >> a[size];
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << a[size] << endl;
    // }

    int *a = new int[10];
    a[0] = 10;
    cout << a[0] << endl;
    delete[] a;
    a = new int[20];
    a[11] = 45;

    cout << a[11] << endl
         << a[0] << endl; // a[0] getting some garbage value not the value 10 that is alloted before

    return 0;
}