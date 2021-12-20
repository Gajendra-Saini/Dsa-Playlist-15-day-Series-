#include <iostream>

using namespace std;

int max(int x, int y)
{
    return x > y ? x : y;
    cout << "Max is called";
}
int min(int x, int y)
{
    return x < y ? x : y;
    cout << "Min is called";
}
int main()
{

    int (*fun)(int, int);
    fun = &max;
    (*fun)(10, 5);
    fun = &min;
    (*fun)(11, 55);
    cout << "heLLO";
    return 0;
}