#include <iostream>
using namespace std;

class A
{
private:
    int x;

protected:
    int y;

public:
    int z;
};
class B : public A
{
public:
    void showdata()
    {
        // cout << "x => " << x << endl;
        cout << "y => " << y << endl;
        cout << "z => " << z << endl;
    }
};
class C : public B
{
public:
    void showdata()
    {
        // cout << "x => " << x << endl;
        cout << "y => " << y << endl;
        cout << "z => " << z << endl;
    }
};
int main()
{
    C c;
    c.showdata();
    return 0;
}