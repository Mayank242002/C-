#include<iostream>
using namespace std;

class stud
{
    string name;
    int age;
    int roll;

    public:

     void get_stud()
     {
         cout<<"enter the name, age, roll";
         cin>>name>>age>>roll;
     }
     void show_stud()
     {
        cout<<name<<" "<<age<<" "<<roll<<" has total marks as:";
     }
};

class marks:public stud
{
    
    public:
    int m1;
    int m2;
    void get_marks(){
       cout<<"enter the marks of two subjects";
       cin>>m1>>m2;
    }
};

class results:public marks
{
    int sports;

    public:
    void get_sports()
    {
        cout<<"enter the marks of the sports";
        cin>>sports;
    }
    void show_results()
    {
        int total=m1+m2+sports;
        cout<<total<<endl;
    }
 
};


int main()
{

   results r1;
   r1.get_stud();
   r1.get_marks();
   r1.get_sports();
   r1.show_stud();
   r1.show_results();
}