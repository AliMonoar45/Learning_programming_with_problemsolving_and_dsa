#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // capacity can be changed baseed on string lent;
    // cout << s.capacity() << endl;
    //  string .empty() return if the string is empty or not also to check we can use if size == 0 or not
    // string .clear() clear or remove all string values or the string
    // s.clear();//toggle this

    // here we can also use s.size()==0
    // if (s.empty() == true)
    //     cout << "empty" << endl;
    // else
    //     cout << "not empty" << endl;

    //  .resize() can either make string small or big acording to user input like this
    // s.resize(7);
    // cout << s << endl; // this is for makeing it small
    // for big
    // s.resize(15);
    // cout << s << endl; //just this fill extras with garbage or null
    s.resize(15, 'x'); //just can pass one carectar
    cout << s << endl;

    return 0;
}