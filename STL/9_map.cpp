#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";

    m.insert({5, "bheem"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 2->" << m.count(2) << endl;

    m.erase(13);
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(1); //finds the iterator of that value

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}