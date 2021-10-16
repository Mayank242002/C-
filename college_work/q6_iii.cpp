#include <iostream>
using namespace std;
int main()
{
    int r=5,c=5;
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<i+1;j++)
        {
            cout<<i<<" ";
        }
        for (int k=i+1;k<=r;k++)
        {
            cout<<k<<" ";
        }

        cout<<endl;
    }
    return 0;
}