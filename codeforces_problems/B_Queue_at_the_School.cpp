#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int t;
    cin >> n >> t;
    char s[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int time = 0; time < t; time++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }
    

    return 0;
}