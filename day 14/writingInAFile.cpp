#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("text.txt");
    file << "hello" << endl;
    file << 25 << endl;
    file << "read me" << endl;
    file.close();
    return 0;
}