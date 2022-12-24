#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    int f = q.front();
    int b = q.back();
    cout << f << " " << b << endl;
    if (!q.empty())
    {
        cout << "Not empty" << endl;
    }
    else
        cout << "Empty" << endl;
    return 0;
}
