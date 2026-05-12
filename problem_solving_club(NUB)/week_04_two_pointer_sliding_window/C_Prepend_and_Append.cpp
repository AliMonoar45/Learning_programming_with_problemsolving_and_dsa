#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<int> dq;
    for (char c : s)
    {
        dq.push_back(c - '0');
    }

    while (!dq.empty())
    {
        if (dq.front() == 0 && dq.back() == 1)
        {
            dq.pop_front();
            dq.pop_back();
        }
        else if (dq.front() == 1 && dq.back() == 0)
        {
            dq.pop_front();
            dq.pop_back();
        }
        else if (dq.front() == dq.back())
        {
            break;
        }
    }

    cout << dq.size() << '\n';
}
void solve_2()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n - 1, ans = n;
    while (l <= r)
    {
        if (s[l] == s[r])
            break;
        else{

            ans -= 2;
            l++;
            r--;
        }
    }
    cout << ans << endl;
}
void solve_3(){
    int n;
    cin >> n;
    string v;
    cin >> v;
    int l = 0, r = n - 1, ans = n;
    //two pointer 
    while (l<r)
    {
        if(v[l]==v[r]) break;
        else{
            ans -= 2;
            l++, r--;
        }

    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        int ans = n;
        while (l<=r)
        {
            if(s[l]==s[r]) break;
            else{
                ans -= 2;
                l++;
                r--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}