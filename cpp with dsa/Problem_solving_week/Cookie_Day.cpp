#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int num_of_jars,
            num_of_children;
        cin >> num_of_jars >> num_of_children;
        int cookies_in_jars[num_of_jars];
        for (int i = 0; i < num_of_jars; i++)
        {
            cin >> cookies_in_jars[i];
        }

        int mn = INT_MAX;
        for (int i = 0; i < num_of_jars; i++)
        {
            if (cookies_in_jars[i]>=num_of_children)
            {
                mn = min(mn, cookies_in_jars[i] % num_of_children);
            }
            
        }
        if (mn==INT_MAX)
        {
            cout << -1;
        }else
        {
            cout << mn;
        }
        
        
        

        /* int left_in_jars[num_of_jars];
        for (int i = 0; i < num_of_jars; i++)
        {
            left_in_jars[i] = cookies_in_jars[i] % num_of_children;
        }
        int min_in_jars = left_in_jars[0];
        bool check = false;
        for (int i = 0; i < num_of_jars; i++)
        {
            if (cookies_in_jars[i] >= num_of_children)
            {
                check = true;
            
            if (min_in_jars > left_in_jars[i])
            {
                min_in_jars = left_in_jars[i];
            }
            }
        }
        
       
        if (check)
        {
            
            cout << min_in_jars;
        }else{
            cout << -1;
        }
         */
        

        cout << endl;
    }

    return 0;
}