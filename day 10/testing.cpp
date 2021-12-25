#include <iostream>
using namespace std;
class complex
{
public:
    int real, img;
    complex operator+(complex a)
    {
        complex temp;
        temp.real = real + a.real;
        temp.img = img + a.img;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.real = 5;
    c1.img = 20;
    c2.real = 10;
    c2.img = 30;
    c3 = c1 + c2;
    cout << c3.real << "+i" << c3.img << endl;
    return 0;
}