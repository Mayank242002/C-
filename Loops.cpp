#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    while (a < 10)
    {
        cout << "a " << a;
        a++;
    }
    int b = 0;
    do
    {
        cout << "b " << b;
        b++;
    } while (b < 10);
    for (int i = 0; i < 10; i++)
    {
        cout << "i " << i;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    ;
    for (;;)
    {
        cout << " Hello";
        i++;
    }
}

#include <iostream>
using namespace std;

/*program for multiplication table using for loop


*/
int main()
{
    int n, i;
    cout << "enter a number";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << i * n << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

/*program for sum of natural numbers using for loops

*/
int main()
{
    int n, i, sum = 0;
    cout << "enter the number";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "sum of natural no is" << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;

/*program for finding factorial of a number


*/
int main()
{
    int n, i = 1, fact = 1;
    cout << "enter the number";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of" << n << "is" << fact << endl;
    return 0;
}

#include <iostream>
using namespace std;

/*program for finding factors of a number


*/
int main()
{
    int i, n;
    cout << "enter the number";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

/*program for finding perfect number


*/
int main()
{
    int i, n, sum = 0;
    cout << "enter the number";
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (2 * n == sum)
        cout << "perfect number";
    else
        cout << "not a perfect number";
    return 0;
}

#include <iostream>
using namespace std;

/*program for finding prime number


*/
int main()
{
    int i, n;
    int count = 0;
    cout << "enter the number";
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        cout << "prime number";
    else
        cout << "not a prime number";
    return 0;
}

#include <iostream>
using namespace std;

/*program for display digits of a number reverse


*/
int main()
{
    int n, r;
    cout << "enter the number";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        r = n / 10;
        cout << r << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

/*program for finding armstrong number


*/
int main()
{
    int n, r, sum = 0, m;
    cout << "enter the number";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        r = n / 10;
        sum = sum + r * r * r;
    }
    if (sum == m)
        cout << "armstrong number";
    else
        cout << "not a armstrong number";
    return 0;
}

#include <iostream>
using namespace std;

/*program for reversing a number


*/
int main()
{
    int n, r, rev = 0;
    cout << "enter the number";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        r = n / 10;
        rev = rev * 10 + r;
    }
    cout << "reverse number is" << rev;
    return 0;
}

#include <iostream>
using namespace std;

/*program for finding gcd of 2 number


*/
int main()
{
    int m, n;
    cout << "enter two numbers";
    cin >> m >> n;
    while (m != n)
    {
        if (m > n)
            m = m - n;
        else if (n > m)
            n = n - m;
    }
    cout << "gcd of 2nos" << m;
    return 0;
}