#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ali monoar
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N, Q;
        cin >> N >> Q;
        vector<long long> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        long long ans = 0;
        for (int i = 0; i < N - 1; i++)
        {
            ans += min(A[i], A[i + 1]);
        }

        while (Q--)
        {
            int idx;
            long long X;
            cin >> idx >> X;
            idx--;

            if (idx > 0)
                ans -= min(A[idx - 1], A[idx]);
            if (idx + 1 < N)
                ans -= min(A[idx], A[idx + 1]);

            A[idx] = X;

            if (idx > 0)
                ans += min(A[idx - 1], A[idx]);
            if (idx + 1 < N)
                ans += min(A[idx], A[idx + 1]);

            cout << ans << "\n";
        }
    }
    return 0;
}
