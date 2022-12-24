#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    pair<int, string> px;
    px = make_pair(10, "Rajshahi");
    cout << px.first << endl;
    cout << px.second << endl;
    get<0>(px) = 20;
    cout << px.first << endl;
    pair<int, string> bx;
    bx = make_pair(20, "Netrokona");
    swap(px, bx);
    return 0;
}