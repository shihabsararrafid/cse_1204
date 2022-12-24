#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    // A(int a)
    // {
    //     x = a;
    // }
    void Print()
    {

        cout << "Inside Print() of class A" << endl;
    }
};
class B : public A
{
public:
    // B()
    // {
    // }
    void Print()
    {
        A::Print();
        cout << "Inside Print() of class B" << endl;
    }
};
main(void)
{
    A a;
    // a.Print();
    B b;
    // b.Print();
    A *p;
    p = &a;
    // p->Print();
    p = &b;
    p->Print();
}