#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        int val;
        cin >> val;
        if(val>0)
            v[i] = 1;
        else if(val<0)
            v[i] = 2;
            else
                v[i] = val;
    }
    for(int val: v)
        cout << val << " ";
        return 0;
}