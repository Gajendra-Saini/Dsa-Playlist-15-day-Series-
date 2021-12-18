// Finding max of array

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size";
    cin >> size;
    int arr[size];
    int temp = arr[0]; // if we use 0 then for negative number it's shows wrong result
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    cout << "Max is" << temp << endl;
    return 0;
}