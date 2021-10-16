#include <iostream>

using namespace std;

int main()
{
    int r=5,c=5;
    for(int i=1;i<=5;i++)
    {

        for (int j=2*i-1;j>=1;j=j-2)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }
    return 0;
}