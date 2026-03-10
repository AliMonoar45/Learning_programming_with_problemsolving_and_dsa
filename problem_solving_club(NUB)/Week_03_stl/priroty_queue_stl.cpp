#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(2);
    pq.push(3);
    pq.push(3);
    pq.push(4);
    pq.push(4);
    pq.push(5);
    cout << "Max heap\n";
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << "Min heap\n";
    priority_queue<int, vector<int>, greater<int>> pq_d;
    pq_d.push(1);
    pq_d.push(2);
    pq_d.push(2);
    pq_d.push(3);
    pq_d.push(3);
    pq_d.push(4);
    pq_d.push(4);
    pq_d.push(5);
    while (!pq_d.empty())
    {
        cout << pq_d.top() << endl;
        pq_d.pop();
    }

    return 0;
}