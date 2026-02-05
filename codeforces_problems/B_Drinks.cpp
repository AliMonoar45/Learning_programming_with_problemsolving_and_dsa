#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    vector<double> v(n);
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        sum += x;
        v[i] = x;
    }
    double res = sum / n;
    cout << fixed<<setprecision(12)<<res;

    return 0;
}