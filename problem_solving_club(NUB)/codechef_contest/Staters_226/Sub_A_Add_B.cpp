#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        while (n>=a)
        {
            n -= a;
            n += b;
        }
        cout << n<<endl;
    }
    
    return 0;
}