#include <iostream>
using namespace std;

int search(int size, int key, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int size;
    int arr[size];
    cout << "Enter size :\n";
    cin >> size;
    int key;
    cout << "Enter key";
    cin >> key;
    cout << search(size, key, arr) << endl;
    return 0;
}