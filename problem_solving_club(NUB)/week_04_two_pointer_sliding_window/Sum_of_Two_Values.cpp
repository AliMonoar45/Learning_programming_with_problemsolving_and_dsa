#include <bits/stdc++.h>
using namespace std;

void solve_2()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == k)
            {
                l = i;
                r = j;
                break;
            }
        }
        if (l != -1)
            break;
    }

    if (l == -1 || r == -1)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        cout << l + 1 << " " << r + 1 << "\n";
    }
}
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());

    int l = 0, r = n - 1;

    while (l < r)
    {
        int sum = v[l].first + v[r].first;
        if (sum == x)
        {
            cout << v[l].second << " " << v[r].second;
            return;
        }

        else if (sum > x)
            r--;
        else
            l++;
    }

    cout << "IMPOSSIBLE";
}

void solve_3()
{
    int n, x;
    cin >> n >> x;
    // aikhane jehetu index chice seti 1 based so we use pair and collect index also
    vector<pair<int, int>> a(n);
    // input and take index
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    // akhon sort apply korajabe karon index is safe
    sort(a.begin(), a.end());
    // two pointer approach start

    int l = 0, r = n - 1;
    // l<r not l<=r if use then pointer can point same value so it will give wrong ans
    while (l < r)
    {
        int sum = a[l].first + a[r].first;
        if (sum == x)
        {
            cout << a[l].second << " " << a[r].second;
            return;
        }
        // jehetu sorted tai boro hole boro ta kombe r choto hole choto ta barbe
        else if (sum > x)
            r--;
        else
            l++;
    }
    cout << "IMPOSSIBLE";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve_3();
    return 0;
}
