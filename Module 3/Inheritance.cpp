#include <iostream>

using namespace std;
class Father
{
private:
    int money = 1;

protected:
    int gold = 2;

public:
    int land = 3;
};
class Son : private Father
{
public:
    void getVar()
    {
        // cout << money << endl;
        cout << land << endl;
        cout << gold << endl;
    }
};
// class son
// {
// private:
//     land = 3;
//     gold = 4;
// };

class GrandSon : private Son
{
public:
    void getVar()
    {
        ////  cout << money << endl;
        //// cout << land << endl;
        // cout << gold << endl;
    }
};
int main()

{
    Son s1;
    s1.getVar();
    GrandSon g1;
  //  g1.getVar();
    return 0;
}