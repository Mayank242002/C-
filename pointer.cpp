/*#include <iostream>
using namespace std;

program for demo pointers


int main()
{
    int a = 10;
    int *p = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "enter size" << endl;
    cin >> size;
    int *p = new int[size];
    delete[] p;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A, *q = &A[4];
    cout << *p << endl;
    cout << endl;
    p++;
    cout << *p << endl;
    cout << endl;
    p--;
    cout << *p << endl;
    cout << endl;
    cout << p << endl;
    cout << p + 2 << endl;
    cout << endl;
    cout << *p << endl;
    cout << *(p + 2) << endl;
    cout << endl;
    cout << q - p << endl;
    cout << p - q << endl;
    return 0;
}*/

#include <iostream>
using namespace std;

int max(int x, int y)
{
    return x > y ? x : y;
}
int min(int x, int y)
{
    return x > y ? y : x;
}
//function pointers
int main()
{
    int (*fp)(int, int);          //declation of function pointers
    fp = max;                     //initialisation of function pointer
    cout << (*fp)(10, 5) << endl; //calling of function pointers
    fp = min;
    cout << (*fp)(10, 5) << endl;
}