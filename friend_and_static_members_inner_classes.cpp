/*#include <iostream>
using namespace std;

//friend functions

class test
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend void fun();
};

void fun()
{
    test t;
    t.a = 10;
    t.b = 10;
    t.c = 10;
    cout<<t.a<<t.b<<t.c<<endl;
}
int main()
{
    fun();

}*/

/*#include <iostream>
using namespace std;

//program for friend class

class your;
class my
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend your;
};
class your
{
public:
    my m;
    void fun()
    {
        m.a = 10;
        m.b = 10;
        m.c = 10;
    }
};*/

/*#include <iostream>
using namespace std;

//program for static member

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
};

int test::count = 0;

int main()
{
    test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;
    t1.count = 12;
    cout << t2.count << endl;
    cout << test::count << endl;
}*/

#include <iostream>
using namespace std;

//program for static member

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
        //a++;
        return count;
    }
};

int test::count = 0;

int main()
{
    test t1, t2;
    cout << t1.getcount() << endl;
    cout << test::getcount() << endl;
}

/**********************************static member examples*************************************/

/*#include <iostream>
using namespace std;

class innova
{
public:
    static int price;
    static int getprice()
    {
        return price;
    }
};

int innova::price = 20;

int main()
{
    innova i1, i2;
    cout << i1.getprice() << endl;
    cout << innova::price << endl;
}*/

/*#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int rollno;
    string name;
    static int admissionno;

    student(string n)
    {
        name = n;
        admissionno++;
        rollno = admissionno;
    }
    void display()
    {
        cout << " name " << name << " roll no " << rollno << " admission no. " << admissionno << endl;
    }
};

int student::admissionno = 0;

int main()
{
    student s1("Mayank"), s2("sakshi");

    s1.display();
    s2.display();
}*/

/**********************************************NESTED OR INNER CLASSES ***********************************************/
/*#include <iostream>
using namespace std;

class outer
{
public:
    int a = 10;
    static int b;

    void fun()
    {
        i.show();
        cout << i.x << endl;
    }
    class Inner
    {
    public:
        int x = 25;
        void show()
        {
            cout << b << endl;
        }
    };
    Inner i;
};

int outer::b = 80;
int main()
{
    outer o;
    o.fun();
}*/
