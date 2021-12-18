#include <iostream>
using namespace std;

int main()
{
    int size, sum = 0;
    cout << "Enter Size ";
    cin >> size;
    int arr[size];
    // Taking input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Programme for sum array numbers
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum is : " << sum << endl;
    return 0;
}