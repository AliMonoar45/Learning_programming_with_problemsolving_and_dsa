#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<long long> tom(n);
        vector<long long> jer(n);
        for (int i = 0; i < n;i++)
            cin >> tom[i];
        for (int i = 0; i < m;i++)
            cin >> jer[i];
        long long s;
        cin >> s;
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // cout << tom[i] << " " << jer[j] << " ";
                if(s==tom[i]+jer[j])
                    cnt++;
            }
            
        }
        cout << cnt << endl;
    }
    
    return 0;
}