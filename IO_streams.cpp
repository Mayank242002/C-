/*#include <iostream>
#include <fstream>

//writing file

using namespace std;

int main()
{
    ofstream ofs("my.txt");
    ofs << "Mayank" << endl;
    ofs << 13 << endl;
    ofs << "cs" << endl;

    ofs.close();
}*/

/*#include <iostream>
#include <fstream>

//reading file
using namespace std;

int main()
{
    ifstream ifs("my.txt"); 

    if (ifs.is_open())
        cout << "file is openend" << endl;
    string name;
    int roll_no;
    string branch;

    ifs >> name >> roll_no >> branch;

    ifs.close();
    cout << name << endl;
    cout << roll_no << endl;
    cout << branch << endl;
}*/

/************************************************* Serialisation**********************************************************/

/*//Serialization is a process of string and retrieving state of an object
#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    string branch;
    friend ofstream &operator<<(ofstream &ofs, student &s);
    friend ifstream &operator>>(ifstream &ifs, student &s);
};

ofstream &operator<<(ofstream &ofs, student &s)
{
    ofs << s.name << endl;
    ofs << s.rollno << endl;
    ofs << s.branch << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, student &s)
{
    ifs >> s.name >> s.rollno >> s.branch;
    return ifs;
}
int main()
{
    student s1;
    s1.name = "Mayank";
    s1.branch = "cs";
    s1.rollno = 10;

    ifstream ifs("student.txt");
    ifs >> s1;
    cout << s1.name << endl;
    cout << s1.rollno << endl;
    cout << s1.branch << endl;
    ifs.close();

    // ofstream ofs("student.txt", ios::trunc);
    //ofs << s1;
    //ofs.close();
}*/
