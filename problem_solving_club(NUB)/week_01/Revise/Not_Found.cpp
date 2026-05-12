#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> freq(26,0);
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        freq[c - 'a']++;

    }
    for (int i = 0; i < freq.size(); i++)
    {
        if(freq[i]==0){
            cout <<char( i + 'a') << endl;
            return 0;
        }
    }
    cout << "None";

    return 0;
}