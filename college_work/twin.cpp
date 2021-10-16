#include <iostream>
using namespace std;
int check_prime(int n); 

int main(void)
{
    int n1, n2;
    cin >> n1 >> n2;
    if (check_prime(n1) && check_prime(n2))
    {
        if (n2 - n1 == 2)
            cout << "twin pripme numbers" << endl;
        else
            cout << "Not twin pripme numbers" << endl;
    }
    else
        cout << "Not twin pripme numbers" << endl;
}

int check_prime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            // number is not prime
            return 0;
    }
    // number is prime
    return 1;
}