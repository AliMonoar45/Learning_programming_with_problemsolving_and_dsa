#include <bits/stdc++.h>

using namespace std;
void sort_v(vector<pair<int,char>> &v,int k){
    for (int i = 1; i <= k;i++){
        for (int j = i + 1; j <= k;j++){
            if(v[i].first>v[j].first)
                swap(v[i], v[j]);
        }
    }
}
int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int k, n;
        cin >> k >> n;
        vector<int> price(k + 1);
        for (int i = 1; i <= k; i++)
            cin >> price[i];
        vector<char> seats(k + 1);
        for (int i = 1; i <= k; i++)
            cin >>
                seats[i];
        int seats_left = 0;
        for (int i = 1; i <= k; i++)
        {
            if (seats[i] == '0')
                seats_left++;
        }
        if (seats_left < n)
        {
            cout << -1;
        }
        else
        {
            vector<pair<int, char>> min_p(k+1);
           for (int i = 1; i <= k; i++)
           {
               min_p[i].first = price[i];
               min_p[i].second = seats[i];
           }
           sort_v(min_p, k);
           int price = 0;
           for (int i = 1; i <= k&&n!=0;i++){
            //    cout << min_p[i].first << " -> " << min_p[i].second << endl;
               if (min_p[i].second != '1'){

                   price += min_p[i].first;
                   n--;
               }
           }
           cout << price;
        }
        cout << endl;
    }
}