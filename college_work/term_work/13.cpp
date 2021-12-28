#include<iostream>
using namespace std;

class student
{
    protected:

    int age;
    string name;
    int enrollno;
    int marks;

    public:

    void get_student()
    {
        cout<<"enter the age, name, enrollno, marks"<<endl;
        cin>>age>>name>>enrollno>>marks;
    }

    void Display()
    {
        cout<<endl;
        cout<<"Name of the Student:"<<name<<endl;
        cout<<"Age of the Student:"<<age<<endl;
        cout<<"rollno of the Student:"<<enrollno<<endl;
        cout<<"Marks of the student:"<<marks<<endl;
    }

};

class faculty
{
    protected:

    string facultyname;
    string facultycode;
    int salary;
    string dept;
    int age;
    int experience;
    char gender;

    public:

    void get_faculty()
    {
        cout<<"enter facultyname, facultycode, salary, dept, age, experience, gender"<<endl;
        cin>>facultyname>>facultycode>>salary>>dept>>age>>experience>>gender;
    }

    void Display()
    {
        cout<<endl;
        cout<<"Name of the Faculty:"<<facultyname<<endl;
        cout<<"Age of the Faculty:"<<age<<endl;
        cout<<"code of the Faculty:"<<facultycode<<endl;
        cout<<"salary of the Faculty:"<<salary<<endl;
        cout<<"Department of the Faculty"<<dept<<endl;
        cout<<"Gender of the Faculty"<<gender<<endl;
        cout<<"Experience of the Faculty"<<experience<<endl;
    }
};

class person:public faculty, public student
{
    string address;
    public:
    
    void get_person()
    {
        cout<<"enter the address of the perosn:"<<endl;
        cin>>address;
    }
    void Display()
    {
        cout<<endl;
       cout<<"address of the person:"<<address<<endl;
    }

};

int main()
{
   person p;
   p.get_student();
   p.get_faculty();
   p.get_person();
   p.student::Display();
   p.faculty::Display();
   p.person::Display();

}