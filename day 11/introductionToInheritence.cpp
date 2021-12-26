#include <iostream>
using namespace std;
class show
{

public:
    int x;

    void display()
    {
        cout << x << endl;
    }
};
class ticket : public show
{

public:
    int y;
    void nothing()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    show s;
    s.x = 5;
    s.display();
    ticket t;
    t.x = 10;
    t.y = 15;
    t.nothing();
    return 0;
}