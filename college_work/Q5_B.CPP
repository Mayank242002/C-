#include <iostream>
using namespace std;

int main()
{
    cout << "Pattern SECOND" << endl;
    char c='A';

    for(int i=1;i<=5;i++)
    {
        for(int j=6-i;j>0;j--)
        {
            cout<<c<<" ";
            c++;
        }

        cout<<endl;
    }

    return 0;
}
