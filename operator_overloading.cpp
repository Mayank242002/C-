/*#include <iostream>
using namespace std;

//program for operator overloading


class complex
{
public:
    int real;
    int img;
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.real = 5;
    c1.img = 3;
    c2.real = 10;
    c2.img = 5;
    c3 = c1 + c2;
    cout << c3.real << "+i" << c3.img << endl;
}*/

/*#include <iostream>
using namespace std;

//program for operator overloading and friend functions
//output stream cout << (insertion) operator can be overloaded upon a class
//Input stream cin >> (extraction) operator can be overloaded upon a class

class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &o, complex &c);
    friend complex operator+(complex c1, complex c2);
};
int main()
{
    complex c1(1, 2), c2(2, 4), c3;
    c3 = c1 + c2;
    cout << c3 << endl;
    operator<<(cout, c3);
}

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

ostream &operator<<(ostream &o, complex &c)
{
    return o << c.img << "+i" << c.img;
}*/

#include <iostream>
using namespace std;

class Rational
{
private:
    int p;
    int q;

public:
    int getP() { return p; }
    int getQ() { return q; }
    void setP(int p)
    {
        this->p = p;
    }
    void setQ(int q)
    {
        this->q = q;
    }
    Rational(int p = 0, int q = 0)
    {
        this->p = p;
        this->q = q;
    }
    friend Rational operator+(Rational r1, Rational r2);
    friend ostream &operator<<(ostream &o, Rational r);
};

Rational operator+(Rational r1, Rational r2)
{
    Rational temp;
    if (r1.q == r2.q)
    {
        temp.p = r1.p + r2.p;
        temp.q = r1.q;
    }
    else
    {
        temp.p = r1.p * r2.q + r2.p * r1.q;
        temp.q = r1.q * r2.q;
    }
    return temp;
}

ostream &operator<<(ostream &o, Rational r)
{
    return (o << r.p << "/" << r.q);
}
int main()
{
    Rational r1(1, 3), r2(2, 2), r3;
    r3 = r1 + r2;
    cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;
}