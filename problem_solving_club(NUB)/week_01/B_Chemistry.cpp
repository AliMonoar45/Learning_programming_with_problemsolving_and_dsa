#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        char ch[n];
        vector<int> fre(26, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> ch[i];
            fre[ch[i] - 'a']++;
        }
        int cnt_even = 0;
        int cnt_odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 == 0&& fre[i]!=0)
                cnt_even++;
            else if(fre[i]%2!=0&&fre[i]!=0)
                cnt_odd++;
        }
        if(cnt_odd-1<=k)
            cout << "YES";
            else
                cout << "NO";

        cout << endl;
    }

    return 0;
}