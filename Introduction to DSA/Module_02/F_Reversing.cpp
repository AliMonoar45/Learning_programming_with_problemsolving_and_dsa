#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &vec, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cin >> vec[i];
    }
}
void output(vector<int> &vec, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << vec[i] << " ";
    }
}
int main()
{
    int sz;
    cin >> sz;
    vector<int> vec(sz);

    input(vec, sz); //O(n)

    for (int i = 0, j = vec.size()-1; i < j; i++, j--) // o(n)
    {
        // int temp = vec[i];
        // vec[i] = vec[j];
        // vec[j] = temp;

        swap(vec[i], vec[j]);
    }
    output(vec, sz); //O(n) 

    //so O(n)

    return 0;
}