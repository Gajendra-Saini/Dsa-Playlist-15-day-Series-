#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size :";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key :";
    cin >> key;

    int first = 0, last = size - 1;
    for (int i = 0; i < size; i++)
    {
        int mid = (first + last) / 2;
        if (arr[mid] == key)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] > key)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    cout << "Not work";

    return 0;
}