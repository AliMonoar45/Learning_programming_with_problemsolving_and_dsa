#include <bits/stdc++.h>
using namespace std;
void swap_val(int &n, int &m){
    int temp = n;
    n = m;
    m = temp;
}
void reverse_v(vector<int> &v)
{
    int l = 0;
    int r = v.size() - 1;
    while (l<r)
    {
        swap_val(v[l], v[r]);
        l++;
        r--;
    }
    
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    reverse_v(v);
    for(int val: v)
        cout << val << " ";

    return 0;
}