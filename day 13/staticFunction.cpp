#include <iostream>
using namespace std;
class test
{
public:
    int a;
    static int count;
    test()
    {
        a = 10;
        count++;
    }
    static int getcount()
    {
        // a=10; // only static variable can declare int static function
        return count;
    }
};
int test::count = 0;

int main()
{
    test t1, t2;
    cout << test::getcount() << endl;
    cout << t1.count << endl;
    cout << t2.count << endl;

    return 0;
}