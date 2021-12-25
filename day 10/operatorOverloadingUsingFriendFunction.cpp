#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;

public:
    complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    } // class constructor   inputs
    friend complex(operator+(complex c1, complex c2));
    void display()
    {
        cout << real << "+i" << img << endl;
    }
};
complex(operator+(complex c1, complex c2))
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    complex c1(5, 6);
    complex c2(6, 2);
    complex c3 = operator+(c1, c2);
    c3.display();
    return 0;
}