#include <bits/stdc++.h>
using namespace std;
// check bit on or off
bool check_kth_bit_on_or_off(int n, int k) {
    return (n >> k) & 1;
}

// print all on off bit
void print_on_off_bit(int n) {
    for (int i = 7; i >= 0; i--) {
        cout << (check_kth_bit_on_or_off(n, i) ? 1 : 0) << " ";
    }
}

// turn on kth bit
int turn_on_kth_bit(int n, int k) {
    return (n | (1 << k));
}

// turn off kth bit
int turn_off_kth_bit(int n, int k) {
    return (n & (~(1 << k)));
}

// toggle bit using xor
int toggle_kth_bit(int n, int k) {
    return (n ^ (1 << k));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << check_kth_bit_on_or_off(45, 4) << endl;
    // print_on_off_bit(45);
    // cout << turn_on_kth_bit(45, 4) << endl;
    // cout << turn_off_kth_bit(45, 3) << endl;
    // cout << toggle_kth_bit(45, 3) << endl;
    // cout << toggle_kth_bit(37, 3) << endl;
    return 0;
}