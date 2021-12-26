#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, complex &c1);
};
ostream &operator<<(ostream &out, complex &c1)
{
    out << c1.real << "+i" << c1.img << endl;
}
int main()
{
    complex c1(10, 5);
    cout << c1;
    return 0;
}