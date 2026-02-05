#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz;
    cin >> sz;
    vector<int> a(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            if (a[i] + 1 == a[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count;

    return 0;
}