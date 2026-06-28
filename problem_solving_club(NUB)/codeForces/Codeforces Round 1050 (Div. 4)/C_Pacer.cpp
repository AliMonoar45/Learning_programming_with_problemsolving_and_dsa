#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve2(){
    int n, m;
    cin >> n >> m;
    int ans = 0;
    int st = 0;
    int ti = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int dif = a - ti;
        if(st==b){
            if(dif%2==0)
                ans += dif;
                else
                    ans += dif - 1;
        }else{
            if(dif%2==1)
                ans += dif;
                else
                    ans += dif - 1;
        }
        st = b, ti = a;
    }
    ans += (m - ti);
    cout << ans << nl;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = m;
    bool flag = true;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        
            if(flag){
                if (a % 2 == 0 && b != 0)
                {
                    m--;
                    flag=!flag;
                }
                else if (a % 2 != 0 && b != 1)
                {
                    m--;
                    flag=!flag;
                }
            }else{


            
            
                if (a % 2 == 0 && b != 1)
                {
                    m--;
                    flag=!flag;
                }
                else if (a % 2 != 0 && b != 0)
                {
                    m--;
                    flag=!flag;
                }
            }
            
       
       
        
        
    }
    cout << m << nl;
}

void solve3(){
    int n, m;
    cin >> n >> m;
    int a1 = 0, b1 = 0;

    int ans = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int dif = a - a1;
        if(b1==b){
            if(dif%2==0){
                ans += dif;
            }else{
                ans += dif - 1;
            }
        }else{
            if(dif%2==1){
                ans += dif;
            }else{
                ans += dif - 1;
            }
        }
        a1 = a, b1 = b;
    }
    ans += (m - a1);
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
        solve3();
    return 0;
}