// Note that if a class have only pure virtual function  or some function and some pure virtual finction then it is called abstract

// uses of pure virtual finction to achieve polymorphism

#include <iostream>
using namespace std;
class car
{
public:
    // virtual void startcar()
    // {
    //     cout << "car started" << endl; // there is no need to declare this because it's use is notning so we make it virtual function
    // }
    virtual void startcar() = 0; // these are called pure virtual functions
    virtual void stopcar() = 0;
};
class innova : public car
{
public:
    void startcar()
    {
        cout << "innova started" << endl;
    }
    void stopcar()
    {
        cout << "innova stopped" << endl;
    }
};
class swift : public car
{
public:
    void startcar()
    {
        cout << "swift started" << endl;
    }
    void stopcar()
    {
        cout << "swift stopped" << endl;
    }
};
int main()
{
    innova i;
    swift s;
    car *p = &i;
    i.startcar();
    i.stopcar();
    cout << endl;
    s.startcar();
    s.stopcar();
    return 0;
}