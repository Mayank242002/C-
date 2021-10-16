/*#include <iostream>
using namespace std;

//function overriding

class Base
{
public:
    void fun()
    {
        cout << "fun of Base " << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun of Derived " << endl;
    }
};

int main()
{
    Derived d;

    d.fun();
}*/

/*#include <iostream>
using namespace std;

//Virtual functions are used for achieving polymorphism
//Base class can have virtual functions
//Virtual functions can be overrides in derived class
//Pure virtual functions must be overrides by derived class

class Base
{
public:
    virtual void fun()
    {
        cout << "fun of Base " << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun of Derived " << endl;
    }
};
//base class pointer to derived class will call base fucntion
//to make it call derved class we use virtual functions
int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->fun();
    d.fun();
}*/

/*#include <iostream>
using namespace std;

class car
{
public:
    virtual void start()
    {
        cout << "car started" << endl;
    }
    virtual void stop()
    {
        cout << "car stopped" << endl;
    }
};

class innova : public car
{
public:
    void start()
    {
        cout << "innova started" << endl;
    }
    void stop()
    {
        cout << "innova stopped" << endl;
    }
};

class swift : public car
{
public:
    void start()
    {
        cout << "swift started" << endl;
    }
    void stop()
    {
        cout << "swift stopped" << endl;
    }
};

int main()
{
    car *c = new swift;
    c->start();
}*/

/*#include <iostream>
using namespace std;

class car
{
public:
    virtual void start() = 0; //pure virtual function
};

class innova : public car
{
public:
    void start()
    {
        cout << "innova started" << endl;
    }
};

class swift : public car
{
public:
    void start()
    {
        cout << "swift started" << endl;
    }
};
int main()
{
    car *p = new innova;
    p->start();
    p = new swift;
    p->start();
}*/

/**************************class having pure virtual function is called Abstract class*********************************************/

#include <iostream>
using namespace std;

class shape
{
public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
};

class rectangle : public shape
{
private:
    int length;
    int breadth;

public:
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }

    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
};

class circle : public shape
{
private:
    int radius;

public:
    int area()
    {
        return 3.14 * radius * radius;
    }

    int perimeter()
    {
        return 2 * 3.14 * radius;
    }

    circle(int r)
    {
        radius = r;
    }
};

int main()
{
    rectangle r(2, 4);
    circle c(7);
    cout << "area of rectangle" << r.area() << endl;
    cout << "perimeter of rectangle" << r.perimeter() << endl;
    cout << "area of circle" << c.area() << endl;
    cout << "perimeter of circle" << c.perimeter() << endl;
}