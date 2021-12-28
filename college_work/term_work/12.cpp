#include<iostream>
using namespace std;

class parent
{
    int a;
    protected:

    int b;

    public:
    int c;

    void get_a_b_c()
    {
        cout<<"enter the values of a,b and c"<<endl;
        cin>>a>>b>>c;
    } 
};

class child1:public parent
{
  public:
   void print_child1()    //b becomes protected and c becomes public
   {
       get_a_b_c();
       cout<<"b:"<<b<<endl;
       cout<<"c:"<<c<<endl;
   }
};

class child2:private parent
{
  public:
   void print_child2()   //b and c becomes private
   {
       get_a_b_c();
       cout<<"b:"<<b<<endl;
       cout<<"c:"<<c<<endl;
   }
};

class child3:protected parent
{
  public:
   void print_child3()   // b and c becomes protected
   {
       get_a_b_c();
       cout<<"b:"<<b<<endl;
       cout<<"c:"<<c<<endl;
   }
};


int main()
{
    child1 c1;
    c1.print_child1();
    child2 c2;
    c2.print_child2();
    child3 c3;
    c3.print_child3();

}