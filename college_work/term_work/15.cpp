#include<iostream>
using namespace std;

class CALC_AREA
{
    protected:

    float radius;
    float height;

    public:

    void get_data()
    {
        cout<<"enter the radius and height:"<<endl;
        cin>>radius>>height;
    }
    virtual void display_volume()=0;

};

class cone:public CALC_AREA
{
    public:

    void display_volume()
    {
        cout<<"Volume of the Cone:"<<(3.14*radius*radius*height)/3<<endl;

    }

};

class hemisphere:public CALC_AREA
{
   public:

    void display_volume()
    {
        cout<<"Volume of the Hemisphere:"<<(2*3.14*radius*radius*radius)/3<<endl;

    }
};
class cyclinder:public CALC_AREA
{
   public:

    void display_volume()
    {
        cout<<"Volume of the Cone:"<<(3.14*radius*radius*height)<<endl;

    }
};

int main()
{
    int choice;
  cout<<"1.Volume of the Cone\n2.Volume of the Hemisphere\n3.Volume of the Cyclinder"<<endl;
  cin>>choice;
  do
  {
    if (choice==1)
    {
        CALC_AREA *t=new cone;
        t->get_data();
        t->display_volume();
    }
    else if (choice==2)
    {
        CALC_AREA *r=new hemisphere;
        r->get_data();
        r->display_volume();
    }
    else if (choice==3)
    {
        CALC_AREA *r=new cyclinder;
        r->get_data();
        r->display_volume();
    }
    cout<<"1.Volume of the Cone\n2.Volume of the Hemisphere\n3.Volume of the Cyclinder"<<endl;
  cin>>choice;

  } while (choice<=3);
}