#include <iostream>
using namespace std;
int main()
{
    int i;
    int ax[5] = {10, 20, 60, 40, 30};
    cout << "Enter index : ";
    cin >> i;
    cout << i << endl;
    try
    {
        if (i >= 5 || i < 0)
        {
            string str = "Out of range Error";
            throw str;
        }
        else if (i >= 0 && i <= 4)
        {
            throw i;
        }
        else
            throw;
    }
    catch (string str)
    {
        cout << str << endl;
    }
    catch (int i)
    {

        cout
            << "ax[" << i << "]" << ax[i] << endl;
    }
    catch (...)
    {
        cout << "None throw is being called" << endl;
    }
    return 0;
}