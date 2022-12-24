#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_front(9);
    l.push_front(10);
    list<int>::iterator it;
    list<int>::iterator it1;
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
    for (auto it : l)
        cout << it << " ";
    cout << endl;
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << endl;
    }
    int x = 8;
    it1 = find(l.begin(), l.end(), 3);
    if (it1 != l.end())
    {
        cout << "ELement found\n";
    }
    else
        cout << "Element not found";
    cout
        << l.front() << endl;
    cout << l.back() << endl;
    l.pop_back();
    l.pop_front();
    // it1 = l.begin();
    l.insert(it1, 14);
    l.insert(next(it1), 14);
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
    int cnt = count(l.begin(), l.end(), 6);
    l.erase(it1);
    it1 = l.begin();
    advance(it1, 4);
    l.erase(l.begin(), it1);
    l.sort();
    list<int> l1;
    l1.push_back(37);
    l1.push_back(35);
    l1.push_back(35);
    l1.push_back(33);
    l1.push_back(32);
    l1.push_back(32);
    l.remove(4);
    l.assign(l1.begin(), l1.end());
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    l.assign(arr, arr + 4);
    l.unique();
    return 0;
}