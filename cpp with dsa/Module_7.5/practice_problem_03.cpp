#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline( cin,s);
    string x;

    getline(cin, x);
    int count = 0;
    stringstream ss(s);
    string word;
    
    while (ss >> word)
    {
        if(word==x)
            count++;
    }
    
    cout << count;
    return 0;
}