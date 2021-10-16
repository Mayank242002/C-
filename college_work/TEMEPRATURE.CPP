#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"1. Convert given temperature Fahrenheit to Celsius\n2.given temperature Celsius to Fahrenheit\n";
    cin>>ch;
    float f,c;
    switch (ch)
    {
    case 1:
          cout<<"Enter Temperature in Fahrenheit:";
          cin>>f;
          c=(f-32)*5/9;
          cout<<c;
          break;
    case 2:
          cout<<"Enter Temperature in Celsius:";
          cin>>c;
          f=1.8*c+32;
          cout<<f;
          break;
    default:
          cout<<"Inappropriate Choice";
          break;
    }
}
