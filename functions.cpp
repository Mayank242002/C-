/*#include <iostream>  
using namespace std;

//program for function overloading sum of two integers


int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a, b, c;
}
int main()
{
    cout << sum(10, 5) << endl;
    cout << sum(12.5f, 3.4f) << endl;
    cout << sum(10, 20, 3) << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

//program for function templates


template <class t>
t maxim(t a, t b)
{
    return a > b ? a : b;
}
int main()
{
    cout << maxim(12, 14) << endl;
    cout << maxim(2.3, 1.4) << endl;
    cout << maxim(2.3f, 5.6f) << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

//default parameters

int sum(int a, int b, int c = 0)
{
    return a + b + c;
}
int max(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : b > c ? b
                                      : c;
}
int main()
{
    cout << sum(1, 2, 3) << endl;
    cout << sum(1, 2) << endl;
    cout << max() << endl;
    cout << max(10) << endl;
    cout << max(10, 13) << endl;
    cout << max(10, 13, 15) << endl;
}*/

/*#include <iostream>
using namespace std;

//program for pass by value


void swap(int a, int b)
{
    cout << a << " " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

/*program for pass by address


void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    cout << a << b;
    return 0;
}*/

/*#include <iostream>
using namespace std;

/*program for pass by reference


void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << y;
    return 0;
}*/

/*#include <iostream>
using namespace std;

/*program for return by address


int *fun()
{
    int *p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = 5 * i;
    }
    cout << p << endl;
    return p;
}
int main()
{
    int *q = fun();
    for (int i = 0; i < 5; i++)
        cout << q[i] << endl;
}*/

/*#include <iostream>
using namespace std;

/*program for return by reference


int &fun(int &x)
{
    return x;
}
int main()
{
    int a = 10;
    fun(a) = 25;
    cout << a << endl;
}*/

/*#include <iostream>
using namespace std;

/*program for global and local variables


int g = 5;
void fun()
{
    int a = 10;
    a++;
    g++;
    cout << a << " " << g << endl;
}
int main()
{
    cout << g;
    fun();
    cout << g << endl;
}*/

/*#include <iostream>
using namespace std;

//program for scoping rule
int x = 10;
int main()
{
    int x = 20;
    {
        int x = 30;
        cout << x << endl;
    }
    cout << x << endl;
    cout << ::x << endl; //global x
}*/

/*#include <iostream>
using namespace std;

/*program for static variables


void fun()
{
    static int s = 10;
    s++;
    cout << s << endl;
}
int main()
{
    fun();
    fun();
}*/

/*#include <iostream>
using namespace std;

/*program for recursive function


void fun(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fun(n - 1);
    }
}
int main()
{
    int x = 5;
    fun(x);
}*/

#include <iostream>
using namespace std;
int Search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (key == A[i])
            return i;
    return 0;
}
int main()
{
    int A[] = {2, 4, 5, 7, 10, 9, 13};
    int k;
    cout << "Enter an Element to be Searched:";
    cin >> k;
    int index = Search(A, 7, k);

    cout << "Element found at index :" << index << endl;
}