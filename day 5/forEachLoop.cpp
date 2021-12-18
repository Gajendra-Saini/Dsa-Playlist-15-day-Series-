#include <iostream>
using namespace std;

int main()
{
    int A[6] = {1, 5, 6, 4, 7, 8};
    //we an also declare array withour giving array to it's size like
    // int arr[] = {5, 6, 7, 8, 9, 12};
    for (int x : A)
    {
        cout << x << endl;
    }
    return 0;
}