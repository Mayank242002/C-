#include <iostream>
using namespace std;

class Time
{
    int h,m,s;
    
    public :

    Time()
    {
        h=m=s=0;
    }
    
    Time(int h1,int m1,int s1)
    {
        h=h1;
        m=m1;
        s=s1;
    }
    
    Time add(Time &t1,Time &t2)
    {
        Time t3;
        
        t3.s=t1.s+t2.s;
        t3.m+=t1.m+t2.m+t3.s/60;
        t3.s=t3.s%60;
        t3.h+=t1.h+t2.h+t3.m/60;
        t3.m=t3.m%60;

        return t3;
        
    }

    
    void display()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    
    
};
int main()
{
    Time t1(1,58,59);
    Time t2(2,12,22);
    Time t3=t3.add(t1,t2);
    t3.display();

    return 0;
}