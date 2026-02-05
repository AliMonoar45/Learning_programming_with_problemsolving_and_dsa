#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int free[7] = {0};
        for(char c:s){
            free[c - 'A']++;
        }
        int cnt = 0;
        for (int i = 0; i < 7; i++)
        {
            if(free[i]<m)
                cnt += m - free[i];
        }
        cout << cnt<<endl;
    }
    
    return 0;
}