#include <iostream>
using namespace std;
class rational
{
private:
    int p;
    int q;

public:
    rational(int p = 1, int q = 1)
    {
        setp(p);
        setq(q);
    }
    rational(rational &r)
    {
        this->p = r.p;
        this->q = r.q;
    }
    void setp(int p)
    {
        this->p = p;
    }
    void setq(int q)
    {
        this->q = q;
    }
    rational operator+(rational r)
    {
        rational t;
        t.p = ((this->p * (r.q)) + (this->q * (r.p)));
        t.q = ((this->q) * (r.q));
        return t;
    }

    friend ostream &operator<<(ostream &o, rational &r);
};
ostream &operator<<(ostream &o, rational &r)
{
    o << r.p << "/" << r.q << endl;
    return o;
}

int main()
{
    rational r1(2, 3), r2(5, 6), r;
    r = r1 + r2;
    cout << r;
    cout << r1;
    cout << r2;
    return 0;
}
