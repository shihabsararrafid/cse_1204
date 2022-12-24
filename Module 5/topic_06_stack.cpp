#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(5);
    st.push(15);
    st.push(25);
    st.push(35);
    st.push(45);
    st.pop();
    st.pop();
    int num = st.top();
    cout << num << endl;
    if (!st.empty())
        cout << "Not empty" << endl;
    else
        cout << "Empty" << endl;
    return 0;
}