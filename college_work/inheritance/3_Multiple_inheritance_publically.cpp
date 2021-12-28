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

class marks
{
    int m1;
    int m2;
    public:
   
    void get_marks(){
       cout<<"enter the marks of two subjects";
       cin>>m1>>m2;
    }
};

class results:private marks
{
    int sports;

    public:
    void get_sports()
    {
        get_marks();
        cout<<"enter the marks of the sports";
        cin>>sports;
    }
    void show_results()
    {
        int total=m1+m2+sports;

        cout<<total<<endl;
    }
 
};
