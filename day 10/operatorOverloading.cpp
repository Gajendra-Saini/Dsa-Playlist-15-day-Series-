//operator overloading means write your own function for an operator and define them in programme

#include <iostream>
using namespace std;
class complex
{

public:
    int real, img; // we cann't direct use private members to main function so better use some function to do that work'
    complex(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }
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
    complex c1(2, 3);
    complex c2(3, 4);
    complex c3 = c1 + c2;
    cout << c3.real << "+i" << c3.img << endl;
    return 0;
}