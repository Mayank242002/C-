#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int ch;
    cout<<"1.Area of Circle\n2.Area of Rectangle\n3.Area of Triangle\n";
    cin>>ch;
    float area;
    switch(ch)
    {
        case 1:int r;
               cout<<"Enter Radius:";
               cin>>r;
               area=(22/7)*r*r;
               cout<<area;
               break;
        case 2:float l,br;
               cout<<"Enter Length and Breadth:";
               cin>>l>>br;
               area=l*br;
               cout<<area;
               break;
        case 3:{float a,b,c;
               cout<<"Enter Sides:";
               cin>>a>>b>>c;
               float s=(a+b+c)/2;
               area=sqrt(s*(s-a)*(s-b)*(s-c));
               cout<<area;
               break;}
        default:cout<<"Inappropriate Choice";    
    }
}
