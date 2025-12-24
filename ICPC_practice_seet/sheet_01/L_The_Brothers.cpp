#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n1_first_name, n1_last_name, n2_first_name, n2_last_name;
    cin >> n1_first_name >> n1_last_name;
    cin >> n2_first_name >> n2_last_name;
    if(n1_last_name==n2_last_name){
        cout << "ARE Brothers";
    }else{
        cout << "NOT";
    }

    return 0;
}