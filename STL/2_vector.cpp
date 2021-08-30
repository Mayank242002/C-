#include <iostream>
#include <vector> //dynamical array
using namespace std;

int main()
{
    vector<int> v;

    vector<int> v2(4, 0);
    //initialise vector v2 of size 4 with all values 0

    vector<int> last(v2); //copy all elements from v2 to last

    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v.capacity() << endl;
    v.push_back(1);
    cout << v.capacity() << endl;
    v.push_back(2);
    cout << v.capacity() << endl;
    v.push_back(3);
    cout << v.capacity() << endl;
    cout << v.size() << endl; //size gives the number of elements are present in the vector

    cout << v.at(2) << endl; //gives value at the index

    v.insert(v.begin(), 0); //to insert in an vector    vector.insert(position before we want to insert,value)

    cout << "fornt " << v.front() << endl;
    cout << "end " << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;
}