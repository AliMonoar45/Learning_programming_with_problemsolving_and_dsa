#include <bits/stdc++.h>


using namespace std;

int main() {
    char ch;
    cin >> ch;
    int asc = (int)ch;
    // cout << asc;
    if (asc>=48&&asc<=57)
    {
        cout << "IS DIGIT";
    }else if (asc>=65&&asc<=90)
    {
        cout << "ALPHA\nIS CAPITAL";
    }else if (asc>=97&&asc<=122)
    {
        cout << "ALPHA\nIS SMALL";
    }
    
    
    
    return 0;
}