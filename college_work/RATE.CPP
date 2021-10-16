#include<iostream>
using namespace std;
int main()
{
    string s,n;
    char type;
    int p;
    float amount;
    float d;
    cout<<"Enter Name,Address,Type of Product(L for Laptop and D for Desktop),Price\n";
    cin>>n>>s>>type>>p;
    switch(type)
    {
        case 'L':
                if(p>0&&p<=25000)
                d=0.0;
                else if(p<=57000)
                d=5.0;
                else if(p<=100000)
                d=7.5;
                else
                d=10.0;
                break;
        case 'D':
                if(p>0&&p<=25000)
                d=5.0;
                else if(p<=57000)
                d=7.6;
                else if(p<=100000)
                d=10,0;
                else
                d=15.0;
                break;        
    }
    amount=p-d*p/100;
    cout<<n<<endl<<s<<endl<<amount<<endl;
}
