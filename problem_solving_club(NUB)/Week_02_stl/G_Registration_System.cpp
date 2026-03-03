#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> is_there;
    while (n--)
    {
        string s;
        cin >> s;
        is_there[s]++;
        
        if(is_there[s]>1){
            string t = s + to_string(is_there[s]-1);
            is_there[t]++;
            cout << t << endl;
            
        }else{
            cout << "OK" << endl;
        }
        }
    
    return 0;
}