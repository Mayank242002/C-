
/***************************************************1.constant type 1************************************************************/

/*#include <iostream>
using namespace std;

int main()
{
    const int x = 10; //or int const x=10
    x = 2;

    //cannot modify x
}*/

/***************************************************2.contant type 2*************************************************************/

/*#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    const int *ptr = &x;
//cannot modify content of x
    int y = 20;
    ptr = &y;
    //++*ptr;
    cout << *ptr << x << endl;
}*/

/*****************************************************3. constant type************************************************************/

/*#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *const ptr = &x;
    ++*ptr;

    //can modfiy the content of x but pointer cannot point to another locations

    // int y = 20;
    //ptr = &y;
    //++*ptr;
    cout << *ptr << " " << x << endl;
}*/

/*****************************************************4. constant type************************************************************/

/*#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    const int *const ptr = &x;
    ++*ptr;

    //cannot modify the content and the location to which pointer is pointing

    // int y = 20;
    //ptr = &y;
    //++*ptr;
    cout << *ptr << " " << x << endl;
}*/

/*****************************************************5. constant type************************************************************/

/*#include <iostream>
using namespace std;

class demo
{
public:
    int x = 10;
    int y = 20;

    void display() const
    {
        x++;
        cout << x << " " << y << endl;
    }
};

int main()
{
    demo d;
    d.display();
}*/

/*****************************************************5. constant type************************************************************/

/*#include <iostream>
using namespace std;

void func(const int &a, int &b)
{

    cout << a << " " << b << endl;
    a++;
}

int main()
{
    int x = 10, y = 20;
    func(x, y);
    cout << x << " " << y << endl;
}*/

/***************************************PREPROCESSORS**********************************************************************/
/*#include<iostream>
using namespace std;

//program for preprocessor or macros


#define max(x, y) (x > y ? x : y)
#define msg(x) #x
#define pI 3.1425

#ifndef pI
#define pI 3
#endif

int main()
{
    cout << pI << endl;
    cout << max(10, 12) << endl;
    cout << msg(hello) << endl;
}**/


    /*******************************************************NAMESPACES*******************************************************************/

/*#include<iostream>
using namespace std;

//program for using namespace


namespace first
{
    void fun()
    {
        cout << "first" << endl;
    }
};
namespace second
{
    void fun()
    {
        cout << "second" << endl;
    }
};
using namespace first;
int main()
{
    second::fun();
    std::cout << "kkk" << endl;
}*/