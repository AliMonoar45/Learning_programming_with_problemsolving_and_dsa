#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq(n);

    for(auto &i:dq)
        cin >> i;

    int s = 0, d = 0;
    int turn = 1;
    int l =0, r = n-1;
    while (l<=r)
    {
        if(turn%2==1){
            if(dq[l]>dq[r]){
                s += dq[l];
                l++;
            }else{
                s += dq[r];
                r--;
            }
        }else{
            if (dq[l] > dq[r])
            {
                d += dq[l];
                l++;
            }
            else
            {
                d += dq[r];
                r--;
            }
        }
        turn++;
    }
    cout << s << " " << d;

    return 0;
}