#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n==1)
    {
        cout << 0;
        return 0;
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i-1]==s[i])
        {
            count++;
        }
        
    }
    cout << count;
    
    return 0;
}