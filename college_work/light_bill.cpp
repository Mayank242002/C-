#include<iostream>
using namespace std;
int main()
{
    string name;
    int units;
    cout<<"enter the name and units"<<endl;
    cin>>name>>units;

    int total_cost=0;
    if (units<=100)
        total_cost=units*0.60;
    else if (units<=300)
        total_cost=units*0.80;
    else
        total_cost=units*0.90;

    if (total_cost>300)
        total_cost=total_cost+total_cost*0.15;

    total_cost+=50;

    cout<<name<<" has total cost "<<total_cost<<endl;
}