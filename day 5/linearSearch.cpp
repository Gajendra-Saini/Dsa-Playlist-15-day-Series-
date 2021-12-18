// searching means finding a num that is store in an array

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
    cout << "Enter key :";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "key is at " << i << endl;
            return 0;
        }
    }

    return 0;
}