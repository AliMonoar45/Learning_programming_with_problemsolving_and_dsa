#include <bits/stdc++.h>
using namespace std;
class Lowest_num_and_idx{
    public:
        int val;
        int idx;
};
Lowest_num_and_idx pint_min_num_idx(vector<int> &a, int n){
    int min = a[0];
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min = a[i];
            idx = i;
        }
        
    }
    Lowest_num_and_idx res;
    res.idx = idx+1;
    res.val = min;
    return res;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Lowest_num_and_idx res = pint_min_num_idx(a, n);
    cout << res.val << " " << res.idx;
    return 0;
}