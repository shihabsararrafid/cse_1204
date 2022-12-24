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
class B
{
private:
    int p;

protected:
    int q;

public:
    int r;
};
class C : public A, public B
{
public:
    void showdata()
    {
        // cout << "x => " << x << endl;
        cout << "y => " << y << endl;
        cout << "z => " << z << endl;
        cout << endl;

        // cout << "p => " << p << endl;
        cout << "q => " << q << endl;
        cout << "r => " << r << endl;
    }
};
int main()
{
    C c;
    c.showdata();
    return 0;
}