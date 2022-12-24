#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 6> ar;
    // inserting element in a single statement
    ar = {10, 60, 30, 70, 20};
    //
    cout << ar.at(2) << endl;
    cout << ar.front() << endl;
    cout << ar.back() << endl;
    // cout << ar.fill(4) << endl;
    ar.fill(4);
    if (ar.empty())
    {
        cout << "EMPTY" << endl;
    }
    cout << ar.size() << endl;
    cout << ar.begin() << endl;
    int *ak = ar.end();
    cout << ak << endl;
    // for (int i = 0; i < 5; i++)
    //     cout << ar.at(i);
    return 0;
}