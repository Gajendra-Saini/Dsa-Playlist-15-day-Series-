#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("text.txt");
    string name;
    int rollno;
    string text;

    input >> name >> rollno >> text;
    input.close();

    cout << "name " << name << endl;
    cout << "roll no " << rollno << endl;
    cout << "text " << text << endl;
}