#include<iostream>
using namespace std;

class Shape
{
    protected:

  double length;
  double breadth;
 
public:

void get_data()
{
    cout<<"enter the length and breadth"<<endl;
    cin>>length>>breadth;
}

virtual void display_area()
{
    
}

};

class Triangle:public Shape{

public:

void display_area()
{
    cout<<"Area of the Triangle:"<<(length*breadth)/2<<endl;
}

};

class Rectangle:public Shape
{

    public:

void display_area()
{
    cout<<"Area of the Rectangle:"<<(length*breadth)<<endl;
}
    
};


int main()
{
  int choice;
  cout<<"1.Area of the Triangle\n2.Area of the Rectangle\n"<<endl;
  cin>>choice;
  do
  {
    if (choice==1)
    {
        Shape *t=new Triangle;
        t->get_data();
        t->display_area();
    }
    else if (choice==2)
    {
        Shape *r=new Rectangle;
        r->get_data();
        r->display_area();
    }
    cout<<"\n1.Area of the Triangle\n2.Area of the Rectangle\n"<<endl;
  cin>>choice;

  } while (choice<=2);
  
}