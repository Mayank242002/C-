#include <iostream>
using namespace std;
int main()
{
    cout << "Pattern First" << endl;

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
            cout<<" ";

    for(int m =1, k=2*i-1;m<=2*i-1;m++,k--)
    {
        if(m<=k)
           cout<<m;
        else
            cout<<k;
    }
    cout<<endl;


    }
    return 0;
}