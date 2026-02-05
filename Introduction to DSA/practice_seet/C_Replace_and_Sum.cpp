#include <bits/stdc++.h>
using namespace std;
void print_arr(vector<int> v, int i)
{
    if (i == v.size())
        return;
    cout << v[i] << " ";
    print_arr(v, i + 1);
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        for (int i = 0; i < n; i++)
        {
            v1[i + 1] = v1[i];
        }

        print_arr(v1, 0);
        cout << endl;
        print_arr(v2, 0);
        cout << endl;
    }

    return 0;
}