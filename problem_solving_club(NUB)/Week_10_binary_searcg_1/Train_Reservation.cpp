#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    char ch;
    cin >> n >> ch;
    vector<string> a(n);
    for(auto &s:a)
        cin >> s;

    for (int i = 0; i < n; i++)
    {
        string s = a[i];
        if(s[ch-'A']=='o'){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}