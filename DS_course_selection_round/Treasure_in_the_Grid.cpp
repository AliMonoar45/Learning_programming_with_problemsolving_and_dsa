#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<long long>> grid(N, vector<long long>(M));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
        }
    }

    while (Q--)
    {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        long long sum = 0;
        for (int i = r1; i <= r2; i++)
        {
            for (int j = c1; j <= c2; j++)
            {
                sum += grid[i][j];
            }
        }
        cout << sum << "\n";
    }

    return 0;
}
