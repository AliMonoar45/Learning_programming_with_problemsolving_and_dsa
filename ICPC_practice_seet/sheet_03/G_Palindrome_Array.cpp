#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(vector<int> &vec){
    vector<int> rev = vec;
    reverse(vec.begin(), vec.end());
    if(vec==rev)
        return true;
    return false;
}
void input_vec(vector<int> &a,int n){
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    input_vec(a, n);
    if(is_palindrome(a))
        cout << "YES";
        else
            cout << "NO";
    return 0;
}