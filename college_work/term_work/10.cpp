#include <iostream>
using namespace std;

class complex
{
    private:
       int a;
       int b;
    public:
    complex(int A, int B)
    {
        a=A;
        b=B;
    }
    complex()
    {
        a=0;
        b=0;
    }
    
    void display()
    {
        if (b>=0)
        cout<<a<<"+i"<<b<<endl;
        else
        cout<<a<<b<<"i"<<endl;
    }
    
    complex operator +(complex &t)   //using member functions
    {
        complex temp;
        temp.a=a+t.a;
        temp.b=b+t.b;
        return temp;
    }
    
    complex operator -(complex &t)   
    {
        complex temp;
        temp.a=a-t.a;
        temp.b=b-t.b;
        return temp;
    }
    bool operator ==(complex &t)
    {
        if (a==t.a && b==t.b)
          return true;
        else 
          return false;
    }

};


int main()
{
    complex a1(1,2);
    complex a2(2,4);
    complex a3;
    a3=a1-a2;
    a3=a3+a2;
    if (a1==a1)
      cout<<"equal"<<endl;
    else
      cout<<"not equal"<<endl;
    a3.display();
}