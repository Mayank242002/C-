#include <iostream>
#include <math.h>
using namespace std;
int check_prime(int n); 
int main()
{
    cout << "enter the number" << endl;
    int num;
    cin>>num;
    int a = check_prime(num);
    switch (a)
    {
    case 0:
        cout<<"entered number is composite"<<endl;;
        break;
    case 1:
        cout<<"entered number is not  composite"<<endl;;
        break;
    }
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