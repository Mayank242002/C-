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

class marks:private stud
{
    
    public:
    int m1;
    int m2;
    void get_marks(){
        get_stud();
       cout<<"enter the marks of two subjects";
       cin>>m1>>m2;
    }
    void show_marks(){
        show_stud();
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
        show_marks();
        int total=m1+m2+sports;

        cout<<total<<endl;
    }
 
};

int main()
{
    class results r1;
    r1.get_sports();
    r1.show_results();

}