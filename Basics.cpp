/*#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter two numbers";
    cin >> a >> b;
    c = a + b;
    cout << "sum:" << c;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter name";
    cin >> s;

    cout << "Hello " << s;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int sum = 10, x = 5;
    sum += x;
    cout << sum << endl;
    int fact = 10, y = 5;
    fact *= y;
    cout << fact;
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    float root1, root2;
    cout << "Enter 3 values";
    cin >> a >> b >> c;
    root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    cout << root1 << " " << root2 << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    float r, area;
    cout << "Enter the Radius";
    cin >> r;
    area = 3.1425f * r * r;
    cout << "Area is " << area << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i = 5, j;
    j = i++;
    cout << j << " " << i << endl;
    int k = 5, l;
    l = ++k;
    cout << l << " " << k << endl;
    int a = 5, b;
    b = 2 * ++a + 2 * a++;
    cout << b << " " << a << endl;
    ;
    int c = 5, d;
    d = 2 * c++ + 2 * c++;
    cout << d << " " << c << endl;
    return 0;
}*/

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    char a = 128;
    cout << (int)a << endl;
    char b = 127;
    b++;
    cout << (int)b << endl;
    char c = -129;
    cout << (int)c << endl;
    char d = -128;
    d--;
    cout << (int)d << endl;
    int e = INT_MAX;
    e++;
    cout << (int)e << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a = 11, b = 7, c;
    c = a & b;
    cout << c << endl;
    int d = 11, e = 7, f;
    f = d | e;
    cout << f << endl;
    int g = 11, h = 7, i;
    i = g ^ h;
    cout << i << endl;
    char j = 5, k;
    k = j << 1;
    cout << (int)k << endl;
    char l = 20, m;
    m = l >> 1;
    cout << (int)m << endl;
    char x = 5, y;
    y = ~x;
    cout << (int)y << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    float radius;
    float area;

    cout << "Enrer Radius of a Circle";
    cin >> radius;

    area = 3.1425 * radius * radius;

    cout << "Area of a Circle is " << area << endl;
}
#include <iostream>
using namespace std;
int main()
{
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;

    cout << "Enter Basic Salary:";
    cin >> basic;
    cout << "Enter percent of Allowences:";
    cin >> percentAllow;
    cout << "Enter percent of Deductions:";
    cin >> percentDeduct;

    netSalary = basic + basic * percentAllow / 100 -
                basic * percentDeduct / 100;

    cout << "Net Salary is:" << netSalary << endl;
}