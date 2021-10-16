#include <iostream>

using namespace std;

int main()
{
    int r=5,c=5;
    for(int i=1;i<=5;i++)
    {

        for (int j=2*i-1;j<=2*r-1;j=j+2)
        {
            cout<<j<<" ";
        }
        for (int k=1;k<=2*(i-1);k=k+2)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}
