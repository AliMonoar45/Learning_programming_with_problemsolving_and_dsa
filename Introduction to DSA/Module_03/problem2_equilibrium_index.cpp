#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i]<<" ";
    // }
    for (int i = 0; i < n; i++)
    {
        int lef_elements_sum = 0, right_element_sum = 0;
        for (int j = 0; j < i; j++)
        {
            lef_elements_sum += a[j];
        }
        for (int j = i+1; j < n; j++)
        {
            right_element_sum += a[j];
        }
        if(lef_elements_sum==right_element_sum){

            cout << i << endl;
            break;
        }
        }
    
    
    
    return 0;
}