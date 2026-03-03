#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &i: v)
            cin >> i;
        
        int cnt=0;
        for (int i = 0; i<n; i++)
        {
            sort(v.begin(), v.end());
            if(v[i]!=0 && v[i+1]!=0&& v[i]<2&&v[i+1]<2){
                v[i] -= 1;
                v[i + 1] -= 1;
                cnt++;
            }
            else if (v[i] != 0)
            {
                v[i] -= 2;
                cnt++;
            }
        }
        // for (int i = 0; i < n;i++)
        //     cout << v[i] << " ";
            cout<< cnt << endl;
    }
    
    return 0;
}