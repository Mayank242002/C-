/*#include <iostream>
using namespace std;

/*program for adding all elements of array


int main()
{
    int a[7] = {4, 8, 6, 9, 5, 2, 7};
    int n = 7, sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum = sum + a[i];
    }
    cout << "sum is " << sum;
    return 0;
}
*/

//array using for each loop

#include <iostream>
using namespace std;
int main()
{
    int a[7] = {4, 8, 6, 9, 5, 2, 7};
    for (auto x : a)
    {
        cout << x << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

/*program for finding max elements in array

*/
int main()
{
    int a[7] = {4, 8, 6, 9, 5, 2, 7};
    int n = 7, max;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "maxmium no is" << max;
    return 0;
}

#include <iostream>
using namespace std;

/*program for linear search of array element

*/
int main()
{
    int a[10], n = 10;
    int key;
    cout << "enter numbers";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter key";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << "found at" << i;
            return 0;
        }
    }
    cout << "not found";
    return 0;
}

#include <iostream>
using namespace std;

/*program for binary search of array element

*/
int main()
{
    int a[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int l = 0, h = 9, key, mid;
    cout << "enter the key";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "found at" << mid;
            return 0;
        }
        else if (key < a[mid])
            h = mid - l;
        else
            l = mid + l;
    }
    cout << "not found";
    return 0;
}

#include <iostream>
using namespace std;

/*program for draw pattern 1 using nested for loop

*/
int main()
{
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

/*program for draw another pattern 2 using nested for loop

*/
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

/*program for draw another pattern 3 using nested for loop

*/
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i + j > 4 - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

/*program for matrix operations 2d array

*/
int main()
{
    int a[2][3] = {3, 3, 3, 3, 3, 3};
    int b[2][3] = {1, 1, 1, 1, 1, 1};
    int c[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Cant be Multiplied";
        return 0;
    }

    // Storing elements of first matrix.
    cout << endl
         << "Enter elements of matrix 1:" << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl
         << "Enter elements of matrix 2:" << endl;
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Multiplying matrix a and b and storing in array mult.
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
            for (k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }

    // Displaying the multiplication of two matrix.
    cout << endl
         << "Output Matrix: " << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }

    return 0;
}