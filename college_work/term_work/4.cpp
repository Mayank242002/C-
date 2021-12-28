#include<iostream>
using namespace std;

class rect
{
    int l,b;

    public:
      friend void cal_area(rect);
      rect(int a,int c)
      {
          l=a;
          b=c;
      }
};

class sqaure
{
   int s;
   public:

   friend void cal_area(sqaure);
   sqaure(int a)
   {
       s=a;
   }
};

class circle
{
    int r;
    public:

    friend void cal_area(circle);
    circle(int a)
    {
        r=a;
    }
};

void cal_area(rect r)
{
    cout<<r.l*r.b<<endl;
}

void cal_area(sqaure r)
{
    cout<<r.s*r.s<<endl;
}

void cal_area(circle r)
{
    cout<<3.14*r.r*r.r<<endl;
}

int main()
{
    rect r(1,2);
    cout<<"Area of the rectangle:";
    cal_area(r);
    sqaure s(2);
    cout<<"Area of the sqaure:";
    cal_area(s);
    circle c(7);
    cout<<"area of the circle:";
    cal_area(c);
}