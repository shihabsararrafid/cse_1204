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
};
class C : public A
{
};
class D : public B, public C
{
public:
    void showdata()
    {
        cout << "x => " << x << endl;
        cout << "y => " << y << endl;
        cout << "z => " << z << endl;
        cout << endl;
    }
};
int main()
{
    D d;
    d.showdata();
    return 0;
}