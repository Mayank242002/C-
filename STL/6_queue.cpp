#include <iostream>
#include <queue>

using namespace std;
int main()
{

    queue<string> q;

    q.push("love");
    q.push("Babbar");
    q.push("Kumar");

    cout << "Size before pop" << q.size() << endl;

    cout << "First Element " << q.front() << endl;
    q.pop(); //it will pop from front
    cout << "First Element " << q.front() << endl;

    cout << "Size after pop" << q.size() << endl;
    cout << q.back() << endl;
}
