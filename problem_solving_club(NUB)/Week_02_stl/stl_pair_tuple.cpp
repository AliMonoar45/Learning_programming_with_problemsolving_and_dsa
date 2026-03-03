#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string, int> student = make_pair("rahim", 10);
    // cout << student.first << " " << student.second << nl;

    // pair<string, int> student = {"karim", 20};
    // auto [name, roll] = student;
    // cout << name << " " << roll << nl;

    // int n;
    // cin >> n;
    // pair<string, int> students[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<< students[i].first << students[i].second<<nl;
    // }
    // for (auto [x,y] : students)
    // {
    //     cout << x << " " << y << nl;
    // }

    // tuple<string, int, string> t = make_tuple("ali", 10, "017xxx");
    
    tuple<string, int, string> t = {"ali", 10, "017xxx"};
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t);
    
    auto [name, roll, phone] = t;
    cout << name << " " << roll << " " << phone << nl;
    return 0;
}