#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        
        for (int i = 1; i <= n; i++)
        {
            int m;
            cin >> m;
            string s;
            cin >> s;
            int curr = v[i];
            for (int j = 0; j < m; j++)
            {
                if (s[j] == 'D')
                {
                    if (curr == 9)
                    {
                        curr = 0;
                    }else
                    curr ++;
                }
                else{
                    if(curr==0){
                        curr = 9;
                    }else{
                        curr--;
                    }
                }
            }
            cout << curr;

            cout << " ";
        }
        cout << endl;
    }

    return 0;
}