#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER THE  TWO DIGIT NUMBER => ";
    cin >> n;
    cout<<endl;
    int first=n/10;
    int second=n%10;
    int sum=first+second;
    int product=first*second;
    if(sum+product==n)
    {
        cout << "SPECIAL 2- DIGIT NUMBER"<<endl;
    }
    else
    {
      cout << "NOT A SPECIAL 2- DIGIT NUMBER"<<endl;
    }
}