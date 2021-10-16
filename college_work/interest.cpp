#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"1.Term Deposit\n2.Recurring Deposit\n";
    cin>>ch;
    int p,n;
    float r;
    float a;
    switch (ch)
    {
    case 1:
           cout<<"Enter Principal,Rate Of Interest,Number Of years\n";
           cin>>p>>r>>n;
           a=p*(1+r/100)*n;
           cout<<"Maturity Amount="<<a<<endl;
           break;  
    case 2:
           cout<<"Enter Monthly Installments,Rate Of Interest,Number of Months\n";
           cin>>p>>r>>n;
           a=p*n+p*n*(n+1)/2*r/100*1/12;
           cout<<"Maturity Amount="<<a<<endl;
           break;
    default:
           cout<<"Inappropriate Choice";
           break;
    }
}
