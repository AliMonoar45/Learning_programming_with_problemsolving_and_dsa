#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int bestNum = a[0], bestFreq = 1;
    int currNum = a[0], currFreq = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == currNum)
        {
            currFreq++;
        }
        else
        {
            currNum = a[i];
            currFreq = 1;
        }
        if (currFreq > bestFreq)
        {
            bestFreq = currFreq;
            bestNum = currNum;
        }
    }

    cout << bestNum << " " << bestFreq << "\n";
    return 0;
}
