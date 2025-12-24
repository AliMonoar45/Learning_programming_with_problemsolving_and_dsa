#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int sz = num.size();
    int l_to_r = 0, r_to_l = 0;
    for (int i = sz - 1; i >= 0; i -= 2)
    {
        r_to_l += num[i]-'0';
        
    }
    
    for (int i = 1; i < sz; i += 2)
    {
        l_to_r += num[i]-'0';
        
    }
    int diff = abs(l_to_r - r_to_l);
    if (diff % 11==0)
    {
        cout << "YES";
    }else
        cout << "NO";

    return 0;
}