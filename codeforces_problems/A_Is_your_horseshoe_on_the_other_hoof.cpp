#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    int uniqueCount = 0;
    for (int i = 0; i < 4; i++)
    {
        bool seenBefore = false;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                seenBefore = true;
                break;
            }
        }
        if (!seenBefore)
            uniqueCount++;
    }

    cout << 4 - uniqueCount << "\n";
    return 0;
}
