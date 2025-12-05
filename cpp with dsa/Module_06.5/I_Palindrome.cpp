#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    string check = str;
    reverse(str.begin(), str.end());
    if (str == check)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}