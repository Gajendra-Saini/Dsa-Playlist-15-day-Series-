// In binery search we divide that array in subparts than compresing it from other

#include <iostream>
using namespace std;

int main()
{
    int size, key;
    cout << "Enter size :";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Key :";
    cin >> key;

    // Programme part
    // and it works only if you give him assending or desanding values means if array is sorted
    int first = 0, last = size - 1;
    for (int i = 0; i < size; i++)
    {
        int mid = (first + last) / 2;
        if (key > arr[mid])
        {
            first = mid + 1;
        }
        else if (key == arr[mid])
        {
            cout << mid << endl;
            return 0;
        }
        else
        {
            last = mid - 1;
        }
    }
    cout << "Not work";

    return 0;
}