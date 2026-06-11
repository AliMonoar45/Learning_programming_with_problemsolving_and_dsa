#include <bits/stdc++.h>

using namespace std;

void s()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    for (int i = 1; i < n - 1; ++i)
    {
        if (s[i - 1] == '1' && s[i] == '1' && s[i + 1] == '1')
        {
            t[i - 1] = '0';
            t[i] = '0';
            t[i + 1] = '0';
        }
    }
    bool flag = true;
    for (char c : t)
    {
        if (c == '1')
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        s();
    }
}