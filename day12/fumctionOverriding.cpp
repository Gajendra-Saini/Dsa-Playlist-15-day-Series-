#include <iostream>
using namespace std;
class parent
{
public:
    void display()
    {
        cout << "display of parent" << endl;
    }
};
class child : public parent
{
public:
    void display()
    {
        cout << "display of child" << endl;
    }
};
int main()
{
    child c;
    c.display(); // we have override display finction in child class if didn't do then it will display parent display function
    parent p;
    p.display();
    return 0;
}