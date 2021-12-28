#include<iostream>
using namespace std;

class TollBooth
{
    unsigned int cars;
    double total_money;

    public:

    TollBooth()
    {
        cars=total_money=0;
    }
    void payingCar()
    {
        cars++;
        total_money+=0.5;
    }

    void nonPayCar()
    {
        cars++;
    }

    void Dispay()
    {
        cout<<"Total cars:"<<cars<<endl;
        cout<<"Total money:"<<total_money<<endl;
    }

};

int main()
{
   TollBooth t;
   int key;
   cout<<"1.Paying car\n2.Non-Paying car\n3.ESC";
   cin>>key;
   do
   {
       if (key==1)
          t.payingCar();
       else if (key==2)
          t.nonPayCar();
       else if (key==3)
       {
           t.Dispay();
           break;
       }
       cout<<endl;
    cout<<"1.Paying car\n2.Non-Paying car\n3.ESC";
   cin>>key;
       
   }while(key<=3);
   
}