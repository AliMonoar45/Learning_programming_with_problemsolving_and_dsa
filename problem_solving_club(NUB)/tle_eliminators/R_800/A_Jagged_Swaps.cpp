#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
   vector<int> a(n+1);
   bool flag = false;
   for (int i = 1; i <= n; i++)
   {
       cin >> a[i];
       
   }
//    for (int i = 2; i <= n-1; i++)
//    {
//        if(a[i-1]<a[i]&&a[i]>a[i+1]){
//            swap(a[i], a[i + 1]);
//        }
//        if(is_sorted(a.begin(),a.end())){
//            flag = true;
//            break;
//        }
//    }


   if(a[1]==1)
       cout << "YES\n";
       else
           cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}