#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

vector<ll> primes;
void sieve(ll n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (ll i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    for (ll i = 2; i <= n; i++) {
        if (prime[i]) primes.push_back(i);
    }
    // return primes;
}

void solve(){
    int n;
    cin >> n;
    ll x = *lower_bound(primes.begin(), primes.end(), 1 + n);
    ll y = *lower_bound(primes.begin(), primes.end(), x + n);
    ll ans = x * y;
    cout <<ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve(10000000);
    test solve();

    return 0;
}