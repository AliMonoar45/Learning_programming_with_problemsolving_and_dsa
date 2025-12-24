#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &a, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i];
    }
}
void output(vector<int> &a, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int sz;
    cin >> sz;
    vector<int> a(sz), b(sz);
    input(a, sz);
    input(b, sz);

    vector<int> c;
    // for (int i = 0; i < sz; i++)
    // {
    //     c.push_back(b[i]);
    // }
    // for (int i = 0; i < sz; i++)
    // {
    //     c.push_back(a[i]);
    // }

    // c.assign(b.begin(), b.end());  // or

    c = b;
    c.insert(c.end(),a.begin(),a.end());

    output(c, c.size());

    return 0;
}