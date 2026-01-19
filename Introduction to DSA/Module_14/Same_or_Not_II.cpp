#include <bits/stdc++.h>
using namespace std;
class MyStack{
    public:
        list<int> l;
        // int sz = 0;
        void push(int val){
            // sz++;
            l.push_back(val);
        }
        void pop(){
            // sz--;
            l.pop_back();
        }
        int size(){
            return l.size();
        }
        bool empty(){
            return l.empty();
        }
        int top(){
            return l.back();
        }
};
class MyQueue
{
public:
    list<int> l;
    // int sz = 0;
    void push(int val)
    {
        // sz++;
        l.push_back(val);
    }
    void pop()
    {
        // sz--;
        l.pop_front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
    int front()
    {
        return l.front();
    }
};
int main()
{
    MyStack st;
    MyQueue q;
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES";

    return 0;
}