#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n;i++)
        cin >> dq[i];
    int s = 0;
    int d = 0;
    int who = 1;
    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);
        if(who%2==1)
            s += mx;
        else
            d += mx;
        if(mx==left)
            dq.pop_front();
            else
                dq.pop_back();

            who++;
    }
    cout << s << " " << d;
}
int main()
{
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // int s = 0, d = 0;
    // if (v.size() == 1)
    // {
    //     cout << v[0] << " " << 0;
    //     return 0;
    // }
    // bool s_turn = true,
    //      d_turn = false;
    // for (int i = 0, j = n - 1; i < j;)
    // {
    //     if (s_turn == true)
    //     {
    //         if (v[i] > v[j])
    //         {

    //             s += v[i];
    //             i++;
    //         }
    //         else
    //         {
    //             s += v[j];
    //             j--;
    //         }
    //         s_turn = false;
    //         d_turn = true;
    //     }
    //     if (d_turn == true)
    //     {
    //         if (v[i] > v[j])
    //         {
    //             d += v[i];
    //             i++;
    //         }
    //         else
    //         {
    //             d += v[j];
    //             j--;
    //         }

    //         d_turn = false;
    //         s_turn = true;
    //     }
    //     if (i == j)
    //     {
    //         s += v[i];
    //         i++;
    //     }
    // }
    // // if(s_turn&& (v.size())%2!=0){
    // //     s += v[(v.size() / 2) + 1];
    // // }
    // // if (d_turn && (v.size()) % 2 != 0){
    // //     d += v[(v.size() / 2) + 1];
    // // }
    // cout << s << " " << d << endl;
    solve();

    return 0;
}