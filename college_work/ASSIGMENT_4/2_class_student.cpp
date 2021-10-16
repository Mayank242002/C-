#include<iostream>
using namespace std;

class student{
    public:

    string Name;
    int rollno;
    int sub1,sub2,sub3;
    float per;
    char grade;


    void InputInfo(string n,int r,int s1,int s2,int s3)
    {
        Name=n;
        rollno=r;
        sub1=s1;
        sub2=s2;
        sub3=s3;
    }

    void calculateper()
    {
        per=((sub1+sub2+sub3)/3.0);
           if (per>=90)
           grade='A';
           else if (per>=80)
           grade= 'B';
           else if (per>=60)
           grade= 'C';
           else if (per>=40)
           grade= 'D';
           else if (per<40)
           grade= 'F';
    }

    void Displayinfo()
    {
        cout<<Name<<" got "<<per<<" and grade "<<grade<<endl;
    }
 
};

int main()
{
    student s;
    s.InputInfo("Mayank",23,95,95,95);
    s.calculateper();
    s.Displayinfo();

}