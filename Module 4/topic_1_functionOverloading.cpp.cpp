#include <iostream>
using namespace std;
class A
{
private:
    int x;
    int y;

public:
    void setData(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int sum(int a, int b)
    {
        return (a + b);
    }
    double sum(int a, double b) { return (a + b); }
    double sum(double a, int b) { return a + b; }
    double sum(double a, double b) { return a + b; }
};
int main()
{
    A a;
    cout << a.sum(10, 15) << endl;
    cout << a.sum(10.125, 15.125) << endl;
    cout << a.sum(10, 15.253) << endl;
    cout << a.sum(10.42, 15) << endl;
    return 0;
}