#include <iostream>
using namespace std;
class Test
{
private:
    int x;
    int y;
    static int z;

public:
    Test();
    Test(int a, int b);
    // copy constructor
    Test(Test &obj)
    {
        // t2

        x = obj.x;
        y = obj.y;
        z++; // task --4
    }
    void getVar()
    {
        cout << "x = " << x << "\n";
        cout << "y = " << y << "\n";
    }
    // task ----------7
    void displayData() const
    {
        cout << "x = " << x << "\n";
        cout << "y = " << y << "\n";
        cout << "z = " << z << "\n";
    }
    // task ---5
    int setData(int a, int b)
    {
        x = a;
        y = b;
        // z++; // task ----4
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    // task ----6
    void DisplayZ()
    {
        cout << "Total Number of object created    =     " << z << endl;
    }
};
int Test::z = 0;
// default constructor
Test::Test()
{
    x = 0;
    y = 0;
    z++; // task ----4
}
// parameterized constructor
Test::Test(int a, int b)
{
    x = a;
    y = b;
    z++; // task ----4
}
int main()
{
    Test t9;
    t9.getVar();
    Test t10(5, 6), t11(t10);
    // t3(t2);
    t11.getVar();
    t11.DisplayZ();

    // creating five objects task ----8
    Test obj[5];
    // intializing all the five data
    for (int i = 0, j = 5; i < 5; i++, j--)
    {
        obj[i].setData(i + 1, j);
    }
    obj[0].getVar();
    obj[0].DisplayZ();

    // task -----------9 adding the sum of x
    t9.displayData();
    Test t1(1, 2), t2(3, 4), t3(5, 60), t4(7, 8), t5(9, 10);
    int maximum = t1.gety();
    string objt = "t1";
    if (maximum < t2.gety())
    {
        maximum = t2.gety();
        objt = "t2";
    }
    if (maximum < t3.gety())
    {
        maximum = t3.gety();
        objt = "t3";
    }
    if (maximum < t4.gety())
    {
        maximum = t4.gety();
        objt = "t4";
    }
    if (maximum < t5.gety())
    {
        maximum = t5.gety();
        objt = "t5";
    }
    int sum = 0;

    sum += t1.getx();
    sum += t2.getx();
    sum += t3.getx();
    sum += t4.getx();
    sum += t5.getx();

    cout << "Total sum of x is =  " << sum << endl;
    cout << " MAX =  " << maximum << " object is " << objt << endl;

    return 0;
}