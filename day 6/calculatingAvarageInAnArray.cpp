#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Size :";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int average = 0;
    for (int i = 0; i < size; i++)
    {
        average += (arr[i]);
    }
    cout << "average is :" << (average / size) << endl;
    return 0;
}