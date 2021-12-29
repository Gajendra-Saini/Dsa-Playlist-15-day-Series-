#include <iostream>
using namespace std;
class outer
{
public:
    void func()
    {
        i.display(); // access of class inner in outer class
    }
    class inner
    {
    public:
        void display()
        {
            cout << "display of inner" << endl;
        }
    };
    inner i; // object of class inner
};
int main()
{

    return 0;
}