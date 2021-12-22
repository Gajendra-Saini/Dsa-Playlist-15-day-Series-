#include <iostream>
using namespace std;

int search(int size, int key, int arr[])
{

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
    int arr[] = {10, 14, 54, 75, 85, 4, 24, 5, 6, 4, 5, 1, 5, 54, 4, 544, 54, 54, 5};
    int key;
    cout << "Enter key :";
    cin >> key;
    cout << search(19, key, arr) << endl;
    return 0;
}