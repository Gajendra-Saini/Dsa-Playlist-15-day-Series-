#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func_add(int x, int y)
{
    return x + y;
}
int main()
{
    int x, y;
    cout << "Enter Two Numbers :" << endl;
    cin >> x >> y;
    cout << "Sum is :" << func_add(x, y) << endl;
    return 0;
}
