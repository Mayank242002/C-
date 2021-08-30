/*#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 1, z;
    try
    {
        if (y == 0)
            throw 101;
        z = x / y;
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "error code " << e << endl;
    }
    cout << "bye" << endl;
}*/

/********************************************* THROW AND CATCH BETWEEN FUNCTIONS******************************************/
/*#include <iostream>
using namespace std;
int division(int a, int b)

{
    if (b == 0)
        throw 1;
    return a / b;
}
int main()
{
    int x = 10, y = 0, z;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Division by zero " << e << endl;
    }
    cout << "Bye" << endl;
}*/

/*#include <iostream>
using namespace std;

//program for all about throw


class myexception : exception
{
};
int division(int a, int b) //throw(myexception)
{
    if (b == 0)
        throw myexception();
    return a / b;
}
int main()
{
    int x = 10, y = 0, z;
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (myexception e)
    {
        cout << "division by zero" << endl;
    }
    cout << "bye" << endl;
}*/

/*#include <iostream>
using namespace std;

//program for all about catch
  //try and catch can also bet nested

class myexception1 : exception
{
};
class myexception2 : public myexception1
{
};
int main()
{
    try
    {
        throw 'a';
    }
    catch (myexception2 e)
    {
        cout << "int catch" << endl;
    }
    catch (myexception1 e)
    {
        cout << "double catch " << endl;
    }
    catch (...)
    {
        cout << "all catch" << endl;
    }
}*/

#include <iostream>
using namespace std;
class StackOverFlow : exception
{
};
class StackUnderFlow : exception
{
};
class Stack
{
private:
    int *stk;
    int top = -1;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }
    void push(int x)
    {
        if (top == size - 1)
            throw StackOverFlow();
        top++;
        stk[top] = x;
    }
    int pop()
    {
        if (top == -1)
            throw StackUnderFlow();
        return stk[top--];
    }
};
int main()
{
    Stack s(5);
    try
    {
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(9);
        s.push(8);
    }
    catch (StackOverFlow s)
    {
        cout << "stackoverflow occurs" << endl;
    }
    catch (StackUnderFlow s)
    {
        cout << "StackUnderFlow  occurs" << endl;
    }
}
