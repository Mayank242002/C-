#include <iostream>
using namespace std;

/*program for finding maximum of 2 nos using conditional statements


*/
int main()
{

    int x, y;

    cout << "enter 2 nos";
    cin >> x >> y;
    if (x > y)
    {
        cout << "maximum is" << x;
    }
    else
    {
        cout << "maximum is" << y;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Invalid denominator" << endl;
    }
    else
    {
        c = a / b;
        cout << c << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age >= 12 && age <= 50)
    {
        cout << "Young" << endl;
    }
    else
    {
        cout << "Not Young" << endl;
    }
    if (age < 12 || age > 50)
    {
        cout << "Eligible for the offer" << endl;
    }
    else
    {
        cout << "Not eligible for the offer" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 no.s" << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << endl;
    }
    else if (b > c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

/*program for find nature of quadratic roots 


*/
int main()
{

    float a, b, c, d, r1, r2;
    cout << "enter a,b,c";
    cin >> a >> b >> c;
    d = b * b + 4 * a * c;

    if (d == 0)
    {
        cout << "roots are real and equal" << endl;
        cout << (b / (2 * a));
    }
    else if (d > 0)
    {

        cout << "roots are real and unequal" << endl;
        cout << (b + sqrt(d / (2 * a)));
        cout << (b - sqrt(d / (2 * a)));
    }
    else
        cout << "imaginery";
    return 0;
}

#include <iostream>
using namespace std;

/*program for displaying day name using else if ladder 


*/
int main()
{
    int day;
    cout << "enter the day number";
    cin >> day;
    if (day == 1)
        cout << "monday" << endl;
    else if (day == 2)
        cout << "tuesday" << endl;
    else if (day == 3)
        cout << "wednesday" << endl;
    else if (day == 4)
        cout << "thursday" << endl;
    else if (day == 5)
        cout << "friday" << endl;
    else if (day == 6)
        cout << "saturday" << endl;
    else if (day == 7)
        cout << "sunday" << endl;
    else
        cout << "invalid day no" << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5, i = 5;
    if (a > b && ++i <= b)
    {
    }
    cout << i << endl;
    if (a < b || ++i <= b)
    {
    }
    cout << i << endl;
}

#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    if (true)
    {
        int c = a + b;
        cout << c << endl;
    }
    {
        int d = a - b;
        if (true)
        {
            cout << d << endl;
        }
    }
    if (int e = a * b)
    {
        cout << e << endl;
    }
}

#include <iostream>
using namespace std;

/*program for displaying day name using switch case 


*/
int main()
{
    int day;
    cout << "enter the day no";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    case 3:
        cout << "wednesday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    case 7:
        cout << "sunday" << endl;
        break;
    default:
        cout << "invalid day no" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

/*switch case program using menu driven options 


*/
int main()
{
    cout << "menu\n";
    cout << "1. add\n"
         << "2. sub\n"
         << "3. multi\n"
         << "4. div\n";
    int option;
    cout << "enter your choice";
    cin >> option;
    int a, b, c;
    cout << "enter 2 numbers";
    cin >> a >> b;
    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    }
    cout << "result is" << c << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    float billAmount;
    float discount = 0.0;

    cout << "Enter Bill Amount:";
    cin >> billAmount;
    if (billAmount >= 500)
        discount = billAmount * 20 / 100;
    else if (billAmount >= 100 && billAmount < 500)
        discount = billAmount * 10 / 100;

    cout << "Bill Amount is:" << billAmount << endl;
    cout << "Discount is :" << discount << endl;
    cout << "Discounted Amount is:" << billAmount - discount << endl;
}

#include <iostream>
using namespace std;
int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}