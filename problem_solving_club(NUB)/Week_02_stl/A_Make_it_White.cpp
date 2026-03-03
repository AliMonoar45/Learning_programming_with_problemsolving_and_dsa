#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        deque<char> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        /* for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 'W')
                v.pop_back();
            else if (v[i] == 'B')
                break;
        }
        for (int i = 0; i <v.size(); i++)
        {
            if (v[i] == 'W')
                v.pop_front();
            else if (v[i] == 'B')
                break;
        } */

        while (!v.empty()&& v.front()=='W')
        {
            v.pop_front();
        }
        while (!v.empty()&& v.back()=='W')
        {
            v.pop_back();
        }
        
        
        // for(char c:v)
        //     cout << c << " ";
        cout <<v.size()<< endl;
    }

    return 0;
}