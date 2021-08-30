#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    //d.pop_back();

    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;
    cout << "Empty or not" << d.empty() << endl;

    cout << "before erase" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 2);
    cout << "after erase" << d.size() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
}