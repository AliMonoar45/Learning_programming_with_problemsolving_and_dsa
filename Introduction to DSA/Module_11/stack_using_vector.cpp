#include <bits/stdc++.h>
using namespace std;
#define nl endl
class MyStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    MyStack st;
    st.push(10);
    // cout << st.top()<<endl;
    st.push(20);
    // cout << st.top()<<endl;
    st.push(30);
    // cout << st.top()<<endl;

    cout << st.top() << nl;
    st.pop();

    cout << st.top() << nl;
    st.pop();

    cout << st.top() << nl;
    st.pop();
    if (st.empty() == false)
        cout << st.top() << nl;

    return 0;
}