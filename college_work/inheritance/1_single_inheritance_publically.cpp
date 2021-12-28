#include<iostream> 
using namespace std;

class ABC
{
    int a;
    int b;
    void get()
     {
         cout<<"enter the value of a and b:";
         cin>>a>>b;
     }

    public:

     int c;
     void get_c()
     {
         get();
         cout<<"enter the value of c:";
         cin>>c;
     }
     void show()
     {
         cout<<a<<b<<c;
     }
};
class xyz:public ABC
{
    int d;
    public:
     void take()
     {
         cout<<"enter the valuie of d:";
         cin>>d;
     }
     void disp()
     {
         cout<<d;
     }

};
int main()
{
   xyz x1;
   x1.get_c();
   x1.take();
   x1.show();
   x1.disp();

}