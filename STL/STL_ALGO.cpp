#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);

    cout << binary_search(v.begin(), v.end(), 3) << endl;

    cout << "lower bound-> " << lower_bound(v.begin(), v.end(), 7) - v.begin() << endl;  //lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’.
    cout << "Uppper bound-> " << upper_bound(v.begin(), v.end(), 1) - v.begin() << endl; //upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’.

    int a = 3;
    int b = 5;

    cout << "max -> " << max(a, b);

    cout << "min -> " << min(a, b);

    swap(a, b);

    cout << "a->" << a << endl;
    cout << "b->" << a << endl;

    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());

    cout << "string->" << abcd << endl;

    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "after rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << " ";
    }
}