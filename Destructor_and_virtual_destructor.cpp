/*#include <iostream>
using namespace std;

//program for destructor


class demo
{
    int *p;

public:
    demo()
    {
        p = new int[10];
        cout << "constructor of demo" << endl;
    }
    ~demo()
    {
        delete[] p;
        cout << "destructor of demo" << endl;
    }
};
void fun()
{
    demo *p = new demo();
    delete p;
}
int main()
{
    fun();
}*/

/********************************************* destructor inheritance**********************************************/

#include <iostream>
using namespace std;

/*program for  virtual destructor

*/
class base
{
public:
    base()
    {
        cout << "contructor of base" << endl;
    }
    virtual ~base()
    {
        cout << "destructor of base" << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "contructor of derived" << endl;
    }
    ~derived()
    {
        cout << "destructor of derived" << endl;
    }
};
void fun()
{
    derived d;
}
int main()
{
    fun();
}

/********************************************* Virtual destructors*************************************************/

/*#include <iostream>
using namespace std;

//program for  virtual destructor

class base
{
public:
    base()
    {
        cout << "contructor of base" << endl;
    }
    virtual ~base()
    {
        cout << "destructor of base" << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "contructor of derived" << endl;
    }
    ~derived()
    {
        cout << "destructor of derived" << endl;
    }
};
void fun()
{
    base *p = new derived();
    delete p;
}
int main()
{
    fun();
}*/