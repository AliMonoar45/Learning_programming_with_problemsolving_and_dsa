#include <bits/stdc++.h>
using namespace std;
const int B = 30;
void demo()
{

    int n, k;
    cin >> n >> k;
    int maxSetBit = 30;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];

        // karon er porer sob bit off amra boundery fix korlam
        // __lg(num) aita sob left a je bit ta on thake oitar position dei jeta 0 based

        // maxSetBit = max(maxSetBit, __lg(a[i]));
    }
    int ans = 0, AND = a[0];
    for (int i = 0; i < n; i++)
    {
        // sobar sathe and kora
        AND &= a[i];
        // amra loop ulta kore chalabo karon hiseber subidha ba visualize korte subidha
        cout << a[i] << " -> ";
        for (int k = maxSetBit; k >= 0; k--)
        {
            // on off bit check
            // num >> k , k ghor porjonto right shift kore 1 er sathe and kore true hole on otherwise off

            if ((a[i] >> k) & 1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    // sobar je bit ta on setai hobe and korle ans
    cout << AND << '\n';
}

void solve()
{
    int n, o;
    cin >> n >> o;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> bits(B + 1);
    for (int i = 0; i < n; i++)
    {
        for (int k = B; k >= 0; k--)
        {
            if ((a[i] >> k) & 1)
            {
                bits[k]++;
            }
        }
    }
    int ans = 0;
    for (int k = B; k >= 0; k--)
    {
        if (bits[k] == n)
        {
            ans += (1LL << k);
        }
        else
        {
            int need = n - bits[k];
            if (o >= need)
            {
                ans += (1LL << k);
                o -= need;
            }
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
        solve();
    }

    return 0;
}