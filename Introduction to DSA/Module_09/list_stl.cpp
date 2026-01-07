#include <bits/stdc++.h>
using namespace std;
int main()
{

    // list<int> l = {1, 2, 3, 4, 5};
    // list<int> l2(l);

    // for (auto it = l.begin(); it !=l.end(); it++)    {
    //     cout << *it << " ";
    // }
    // l2.clear();
    // if (l2.empty())
    // {
    //     cout << "empty"<<endl;
    // }
   

    // l.insert(next(l.begin(), 2), 100);

    // cout << *next(l.begin(), 2);
    //l2.resize(5,10);
   // for(int val:l){
    //     cout << val<<" ";
    // }
    list<int> l = {10, 20, 30, 10, 50, 40, 10};
    // l.remove(10);
    // l.sort(greater<int>());
    l.sort();
    l.unique();
    for(int val:l)
        cout << val<<" ";
    return 0;
}