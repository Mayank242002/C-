/*#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
     Rectangle()
    {
        length = 1;
        breadth = 1;
    }
Rectangle(int l = 1, int b = 1)
{
    setlength(l);
    setbreadth(b);
}
Rectangle(Rectangle &rec)
{
    length = rec.length;
    breadth = rec.breadth;
}
void setlength(int l) //setlength and setbreadth are the mutators
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
int getlength() //getlength and getbreadth are the acessors
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
}
;

int main()
{
    Rectangle r1;         //object in stack
    Rectangle *ptr = &r1; //asigning object to the pointer

    cout << r1.area() << endl;
    cout << ptr->area() << endl;
    cout << r1.getbreadth() << endl;
    Rectangle *r2 = new Rectangle(r1); //object in heap

    cout << r2->area() << endl;
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
int main()
{
    Rectangle r1(10, 10);
    cout << "Area " << r1.area() << endl;
    if (r1.isSquare())
        cout << "Yes" << endl;
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
    cout << "Rectangle Destroyed";
}*/

/*#include <iostream>
using namespace std;

/*program for this pointer


class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle r1(10, 5);
    cout << r1.area() << endl;
}*/

#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    int phymarks;
    int chemarks;
    int mathsmarks;

public:
    student();
    student(int r, string n, int p, int c, int m);
    int totalmarks();
    char grade();
};

int main()
{
    int roll;
    string name;
    int m, p, c;
    cout << "Enter Roll number of a Student: ";
    cin >> roll;
    cout << "Enter Name of a Student:";
    cin >> name;
    cout << "Enter marks in 3 subjects";
    cin >> m >> p >> c;
    student s(roll, name, m, p, c);
    cout << "Total Marks:" << s.totalmarks() << endl;
    cout << "Grade of Student:" << s.grade() << endl;
}

student::student(int r = 0, string n = "a", int p = 0, int c = 00, int m = 0)
{
    rollno = r;
    name = n;
    phymarks = p;
    chemarks = c;
    mathsmarks = m;
}

int student::totalmarks()
{
    return phymarks + mathsmarks + chemarks;
}

char student::grade()
{
    float avg = (float)totalmarks() / 3;
    if (avg < 40)
        return 'C';
    else if (avg >= 40 && avg < 60)
        return 'B';
    else
        return 'A';
}