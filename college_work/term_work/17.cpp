#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

template<class T>
class list
{
    private:
     vector<T> v;
public:
    void insert()
    {
        T x;
        int index;
        cout<<"enter the value to be inserted and index:"<<endl;
        cin>>x>>index;
        v.insert(v.begin()+index,x);
    }
    void remove()
    {
        T x;
        cout<<"enter the value to be deleted:"<<endl;
        cin>>x;
        auto it = find(v.begin(), v.end(), x);
        v.erase(it);
    }
    void print()
    {
        cout<<"Elements of the List:"<<endl;
        for (int i=0;i<v.size();i++)
           cout<<v[i]<<" ";
        cout<<endl;
    }
};





int main()
{
   list<float> l;

   int choice;
   cout<<"1.insert\n2.Delete\n3.Print\n"<<endl;
   cin>>choice;

   do
   {
       if (choice==1)
       {
           l.insert();
       }
       else if (choice==2)
       {
           l.remove();
       }
       else if (choice==3)
       {
           l.print();
       }

       cout<<"1.insert\n2.Delete\n3.Print\n"<<endl;
   cin>>choice;
   } while (choice<=3);
   
   
   
}