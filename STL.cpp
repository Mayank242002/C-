/*//standard template library
#include <iostream>
#include <vector>
using namespace std;

//vector 

int main()
{
    vector<int> v = {10, 20, 30};
    v.push_back(40);
    v.pop_back();

    for (int x : v)
    {
        cout << x << " ";
    }
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}*/

/*#include <iostream>
#include <list>
using namespace std;

//list

int main()
{
    list<int> v = {10, 20, 30};
    v.push_back(40);
    v.pop_back();

    for (int x : v)
    {
        cout << x << " ";
    }
    list<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}*/

/*#include <iostream>
#include <forward_list>
using namespace std;

//forward_list

int main()
{
    forward_list<int> v = {10, 20, 30};
    v.push_front(40);
    //v.pop_front();

    for (int x : v)
    {
        cout << x << " ";
    }
    forward_list<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}*/

/*#include <iostream>
#include <set>
using namespace std;

//Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it.

int main()
{
    set<int> v = {10, 20, 30, 30};
    v.insert(40);
    // v.erase(20);

    for (int x : v)
    {
        cout << x << " ";
    }
    set<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}*/

/******************************************************MAP CLASSES*************************************************************/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "mayank"));
    m.insert(pair<int, string>(2, "sakshi"));

    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << ":" << itr->second << endl;
    }

    map<int, string>::iterator itr1;
    itr1 = m.find(2);

    cout << itr1->second << endl;
}
