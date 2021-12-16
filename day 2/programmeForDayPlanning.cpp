#include <iostream>
using namespace std;
enum days
{
    mon,
    tue,
    wed,
    thr,
    fri,
    sat,
    sun
};
int main()
{
    int days;
    cin >> days;
    if (days == mon)
    {
        cout << "this is mon" << endl;
    }
    else if (days == tue)
    {
        cout << "this is tue" << endl;
    }
    else if (days == wed)
    {
        cout << "this is wed" << endl;
    }
    else if (days == thr)
    {
        cout << "this is thr" << endl;
    }
    else if (days == fri)
    {
        cout << "this is fri" << endl;
    }
    else if (days == sat)
    {
        cout << "this is sat" << endl;
    }
    else if (days == sun)
    {
        cout << "this is sun" << endl;
    }
    else
    {
        cout << "you enter wrong input" << endl;
    }
    return 0;
}