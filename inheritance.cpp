/*#include <iostream>
using namespace std;
class Base
{
public:
    int a;
    void display()
    {
        cout << "Display of Base " << a << endl;
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "Show of Derived" << endl;
    }
};
int main()
{
    Derived d;
    d.a = 100;
    d.display();
    d.show();
}*/

/*#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h)
    {
        height = h;
    }
    int getHeight() { return height; }
    void setHeight(int h) { height = h; }
    int volume() { return getLength() * getBreadth() * height; }
};
int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout << "Volume is " << c.volume() << endl;
}
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l)
{
    length = l;
}
void Rectangle::setBreadth(int b)
{
    breadth = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    // cout<<"Rectangle Destroyed";
}*/

/*#include <iostream>
using namespace std;

//program for using base and derived class

class base
{
public:
    base()
    {
        cout << "non-param base" << endl;
    }
    base(int x)
    {
        cout << "param of base " << x << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "non-param derived" << endl;
    }
    derived(int y)
    {
        cout << " param of derived " << y << endl;
    }
    derived(int x, int y) : base(x)
    {
        cout << "param of derived " << y << endl;
    }
};
int main()
{
    derived(5, 10);
}*/

/*#include <iostream>
using namespace std;

/*program for using using access specifiers


class rectangle
{
private:
    int length;
    int breadth;

public:
    void setlength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 1;
    }
    void setbreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            breadth = 1;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    rectangle r1;
    r1.setlength(10);
    r1.setbreadth(5);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    cout << "length" << r1.getlength() << endl;
    cout << "breadth" << r1.getbreadth() << endl;
}*/

/*class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funBase()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};
class Derived : public Base
{
public:
    void funDerived()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};
int main()
{
    Base b;
    b.a = 10;
    b.b = 5;
    b.c = 20;
}*/

/*#include <iostream>
using namespace std;

class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funParent()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};
class Child : private Parent
{
private:
protected:
public:
    void funChild()
    {
        //a = 10;
        b = 5;
        c = 15;
    }
};
class GrandChild : public Child
{
public:
    void funGrandChild()
    {
        //a=10;
        //b = 5;
        //c = 20;
    }
};
int main()
{
    Child c;
    //c.a = 10;
    //c.b = 5;
    //c.c = 20;
}*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;

public:
    Employee(int id = 0, string name = " ")
    {
        this->id = id;
        this->name = name;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
};

class fullTimeEmployee : public Employee
{
private:
    int salary;

public:
    fullTimeEmployee(int id = 0, string name = " ", int salary = 0) : Employee(id, name)
    {
        this->salary = salary;
    }
    int getsalary()
    {
        return salary;
    }
};

class partTimeEmployee : public Employee
{
private:
    int wages;

public:
    partTimeEmployee(int id = 0, string name = " ", int wages = 0) : Employee(id, name)
    {
        this->wages = wages;
    }
    int getwages()
    {
        return wages;
    }
};

int main()
{
    fullTimeEmployee p1(1, "Mayank", 12000);
    partTimeEmployee p2(2, "Kamlesh", 13000);
    cout << "salary of " << p1.getname() << " " << p1.getsalary() << endl;
    cout << "Daily wages of " << p2.getname() << " " << p2.getwages() << endl;
}