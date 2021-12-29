#include <iostream>
using namespace std;
class test
{
public:
    int a;
    static int count;
    // int hello(){} // this is a function
    // test(){} // this is a constructor of the class

    test()
    {
        a = 10;
        count++;
    }
};
int test::count = 0; // static variable
int main()
{
    test t1, t2;
    // t1.count = 5;
    cout << t1.count << endl;
    cout << t2.count << endl;
    // value of t1 and t2 is same means that it is container for both t2 and t1 and declare only once and contains all
    t1.count = 55;
    cout << t2.count << endl;    // using object
    cout << test::count << endl; //using class

    return 0;
}