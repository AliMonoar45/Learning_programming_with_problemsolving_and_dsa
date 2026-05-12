#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> v(7);
        for(auto &i:v)
            cin >> i;
        int mx = *max_element(v.begin(), v.end());
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            sum += v[i];
        }
        cout <<-1*(sum-(2*mx))<< endl;
    }
    
    return 0;
}