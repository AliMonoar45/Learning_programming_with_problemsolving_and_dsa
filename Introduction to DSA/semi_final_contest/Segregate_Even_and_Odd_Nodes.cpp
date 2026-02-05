#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    list<int> l;
    int x;
    while (cin >> x)
    {
        l.push_back(x);
    }
    list<int> l1=l;
    queue<int> q;
    while (!l.empty())
    {
        if (l.front() % 2 == 0)
            q.push(l.front());

        l.pop_front();
    }
    while (!l1.empty())
    {
        if (l1.front() % 2 != 0)
            q.push(l1.front());

        l1.pop_front();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    
    return 0;
}