# Math & Number Theory 2

## Prime

A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

### Sieve of Eratosthenes

The Sieve of Eratosthenes is an efficient algorithm to find all prime numbers up to a given limit $N$. 

**Concept:**
1. Create a boolean array of size $N+1$ and initialize all entries as `true`.
2. Mark index `0` and `1` as `false`.
3. Iterate from `2` to $\sqrt{N}$. If `i` is prime, mark all of its multiples (starting from $i^2$) as `false`.

**Implementation:**
```cpp
#include <bits/stdc++.h>
using namespace std;

void sieve(int n) {
    // Create a boolean vector, initialize to true
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    // We only need to check up to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            // Mark multiples of i as false, starting from i^2
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Print primes
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) cout << i << " ";
    }
    cout << endl;
}
```
* **Time Complexity:** $O(N \log(\log N))$ — highly efficient and easily passes time limits for $N$ up to $10^7$.
* **Space Complexity:** $O(N)$

---

## Prime Factorization

Prime factorization is the process of breaking down a number into the set of prime numbers that multiply together to make the original number.

### Approach 1: Trial Division (Optimal for single queries)
Instead of iterating all the way up to $N$, we only need to check factors up to $\sqrt{N}$. If a number $N$ is composite (not prime), it must have at least one prime factor $\le \sqrt{N}$.

**Implementation:**
```cpp
#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n) {
    // 1. Extract all factors of 2
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // 2. n is now odd, check odd numbers up to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // 3. If n is a prime greater than 2, handle the remaining value
    if (n > 2) {
        cout << n;
    }
    cout << endl;
}
```
* **Time Complexity:** $O(\sqrt{N})$
* **Space Complexity:** $O(1)$

---

### Approach 2: Smallest Prime Factor (SPF) Sieve (Optimal for multiple queries)

When a problem gives you multiple queries (e.g., $10^5$ test cases) asking for the prime factorization of $N$, calculating it in $O(\sqrt{N})$ per query is too slow. Instead, we can precompute the **Smallest Prime Factor (SPF)** for every number up to the maximum possible $N$ using a modified Sieve of Eratosthenes. 

**Concept:**
1. Create an array `spf` where `spf[i]` stores the smallest prime factor of `i`.
2. Initialize `spf[i] = i` (assume every number is prime initially) and set `spf[i] = 2` for all even numbers.
3. Iterate through odd numbers from $3$ to $\sqrt{N}$. If `spf[i] == i`, it is prime. Mark all of its unmarked multiples `j` with `spf[j] = i`.
4. To factorize any number $X$, repeatedly divide $X$ by `spf[X]` until $X$ becomes 1.

**Implementation:**
```cpp
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005; // 10^6, adjust based on problem constraints
int spf[MAXN];

// 1. Precomputation step (Call this once in main!)
void sieveSPF() {
    spf[1] = 1;
    
    // Initialize SPF to the number itself
    for (int i = 2; i < MAXN; i++) {
        spf[i] = i; 
    }
    
    // Optimization: Handle even numbers separately
    for (int i = 4; i < MAXN; i += 2) {
        spf[i] = 2;
    }
    
    // Sieve for odd numbers
    for (int i = 3; i * i < MAXN; i++) {
        // If i is prime
        if (spf[i] == i) {
            // Mark all multiples of i starting from i*i
            for (int j = i * i; j < MAXN; j += i) {
                // Update only if it hasn't been marked by a smaller prime
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

// 2. Query step (Call this for each test case)
void getFactorization(int n) {
    cout << "Prime factors of " << n << ": ";
    while (n != 1) {
        cout << spf[n] << " ";
        n /= spf[n]; // Divide n by its smallest prime factor
    }
    cout << endl;
}

int main() {
    // Precompute SPF array once
    sieveSPF();
    
    // Answer queries instantly
    getFactorization(120); // Output: 2 2 2 3 5
    getFactorization(315); // Output: 3 3 5 7
    
    return 0;
}
```
* **Precomputation Time Complexity:** $O(N \log(\log N))$
* **Query Time Complexity:** $O(\log N)$ — highly efficient for handling massive amounts of test cases on platforms like Codeforces or CodeChef.
* **Space Complexity:** $O(N)$ to store the `spf` array.