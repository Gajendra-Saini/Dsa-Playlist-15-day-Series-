// In this part we have to make a programme that take student name , student roll no and  shows total marks and grade of that student
// In this don't use cin and cout in class use this outside

#include <iostream>
using namespace std;
class student
{
private:
    int a, b, c;

public:
    student(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    float add()
    {
        float sum = a + b + c; // you can't use this variable without declare them firs declare then exicute them
        return sum;
    }
    char grade()
    {
        float average = add() / 3;
        if (average < 40)
        {
            return 'C';
        }
        else if (average >= 40 && average < 60)
        {
            return 'B';
        }
        else
        {
            return 'A';
        }
    }
};

int main()
{
    int rollno, a, b, c;
    string name;
    cout << "Enter rollno :" << endl;
    cin >> rollno;
    cout << "Enter name :" << endl;
    cin >> name;
    cout << "Enter marks out of 100 :" << endl;
    cin >> a >> b >> c;
    cout << endl;
    student first(a, b, c);
    cout << "sum is:" << first.add() << endl;
    cout << "Grade is :" << first.grade();
    return 0;
}
