#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
vector<int> primes;

void sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i]) primes.push_back(i);
    }
    // return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve(3001);
    int n;
    cin >> n;
    vector<int> freq(n + 1);
    for(auto p:primes){
        for (int i = p; i <= n; i+=p)
        {
            freq[i]++;
        }
        
    }
    int cnt=0;
    for(auto i:freq){
        if(i==2)
            cnt++;
    }
    cout << cnt;
    return 0;
}