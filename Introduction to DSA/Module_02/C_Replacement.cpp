#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &v, int sz, int st = 0)
{
    if (st == sz)
    {
        return;
    }
    cin >> v[st];
    input(v, sz, st + 1);
}
int main()
{
    int sz;
    cin >> sz;
    vector<int> vec(sz);
    input(vec, sz);
    for (auto i : vec)  //O(n)
    {
        if (i > 0)
        {
            cout << 1 << " ";
        }
        else if (i < 0)
        {
            cout << 2 << " ";
        }
        else
        {
            cout << i << " ";
        }
    }

    return 0;
}