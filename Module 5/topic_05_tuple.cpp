#include <iostream>
#include <utility>
#include <tuple>
using namespace std;
int main()
{
    tuple<int, string, float> t;
    t = make_tuple(100, "Kamal", 3.5);
    // int num = get<0> t;
    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;
    get<2>(t) = 4.5;
    tuple<int, string, float> k;
    k = make_tuple(200, "Rafid", 5.5);
    swap(k, t);
    return 0;
}