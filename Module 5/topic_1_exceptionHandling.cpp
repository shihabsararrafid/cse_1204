#include <iostream>
using namespace std;
int main()
{
    int i;
    int ax[5] = {10, 20, 60, 40, 30};
    cout << "Enter index : ";
    cin >> i;
    try
    {
        try
        {
            try
            {
                float g = 9.8;
                throw g;
            }
            catch (float f)
            {
                cout << "Float received from nested 1 " << f << endl;
                string str = "Out of Range Error";
                throw str;
            }
        }
        catch (string str)
        {
            cout << "String catched    " << str << endl;
            if(i>=5){
                
            }
            throw i;
        }
    }
    catch (char x)
    {
        cout << "successfully catched the value of i " << x << endl;
    }
    catch (...)
    {
        cout << "NO try received " << endl;
    }

    cout << "ax[" << i << "]" << ax[i] << endl;
    return 0;
}