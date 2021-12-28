#include <iostream>
#include <vector> 
#include <list>
#include <map>
using namespace std;

int main()
{
    vector<int> v;
    cout << endl;

    cout<<"/********************************************Vector********************************************************/"<<endl;
    cout << "Capacity at first time:"<<v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity after inserting one element:"<< v.capacity() << endl;
    v.push_back(2);
    cout <<  "Capacity after inserting second element:"<<v.capacity() << endl;
    v.push_back(3);
    cout <<  "Capacity after inserting third element:"<<v.capacity() << endl;
    cout << "Total size of the Vector:"<<v.size() << endl; //size gives the number of elements are present in the vector

    cout << "Value at the index 2:"<<v.at(2) << endl; //gives value at the index

    v.insert(v.begin(), 0); //to insert in an vector    vector.insert(position before we want to insert,value)

    cout << "fornt:" << v.front() << endl;
    cout << "end:" << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;

    
    cout<<"/********************************************List********************************************************/"<<endl;
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    cout<<"List elements:"<<endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "After erase:" << endl;
    for (int i : l)
    {
        cout <<i << " ";
    }

    cout<<"/********************************************Map*******************************************************/"<<endl;
    map<int, string> m;

    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";

    m.insert({5, "bheem"});

    cout << "Before erase:" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 2->:" << m.count(2) << endl;

    m.erase(13);
    cout << "After erase:" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(1); //finds the iterator of that value
    cout<<"Traversing Map"<<endl;
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}