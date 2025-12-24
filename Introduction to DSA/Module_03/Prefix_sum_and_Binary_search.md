# Prefix Sum Method Notes

A concise, ready-to-save reference on prefix sums: definitions, examples, complexity, variants, tips, and practice exercises.

---

## Overview
**Definition**  
A prefix sum array stores cumulative sums so range-sum queries can be answered in constant time after linear preprocessing.

**Core idea**  
Given an array `a[0..n-1]`, build `pref[0..n]` with `pref[0] = 0` and for `i >= 1`:
\[
\text{pref}[i] = \text{pref}[i-1] + a[i-1]
\]
Then the sum of subarray `a[L..R]` is:
\[
\text{sum}(L,R) = \text{pref}[R+1] - \text{pref}[L]
\]

---

## 1D Prefix Sum
**When to use**  
- Multiple range-sum queries on a static array.  
- Converting repeated summation into constant-time queries.

**C++ Implementation**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n), pref(n+1, 0);
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 1; i <= n; ++i) pref[i] = pref[i-1] + a[i-1];

    while (q--) {
        int L, R; // 0-based indices
        cin >> L >> R;
        cout << pref[R+1] - pref[L] << '\n';
    }
    return 0;
}
```

**Complexity**  
- **Preprocessing:** \(O(n)\)  
- **Each query:** \(O(1)\)  
- **Space:** \(O(n)\)

---

## Variants and Examples

### Subarray Sum Equals K
**Idea**  
Count subarrays with sum equal to `K` using running prefix and a hashmap of prefix frequencies.

**Sketch**
- `pref = 0`, `cnt[0] = 1`.
- For each `x` in array: `pref += x`; `ans += cnt[pref - K]`; `cnt[pref]++`.

**Complexity**  
- **Time:** \(O(n)\) average  
- **Space:** \(O(n)\)

---

### Difference Array for Range Updates
**Idea**  
Apply many range increments efficiently using a difference array `diff`:
- To add `val` to `a[L..R]`: `diff[L] += val; diff[R+1] -= val;`
- After all updates, compute final array by prefix-summing `diff`.

**Complexity**  
- **Each update:** \(O(1)\)  
- **Finalization:** \(O(n)\)  
- **Space:** \(O(n)\)

---

### 2D Prefix Sum
**Idea**  
For an `m x n` matrix `A`, build `pref` of size `(m+1) x (n+1)` where `pref[i][j]` is sum of `A[0..i-1][0..j-1]`. Rectangle sum `(r1,c1)` to `(r2,c2)`:
\[
\text{sum} = \text{pref}[r2+1][c2+1] - \text{pref}[r1][c2+1] - \text{pref}[r2+1][c1] + \text{pref}[r1][c1]
\]

**Complexity**  
- **Preprocessing:** \(O(mn)\)  
- **Each query:** \(O(1)\)  
- **Space:** \(O(mn)\)

---

## Tips and Pitfalls
- **Prefer 1-based prefix** (`pref[0] = 0`) to avoid `left-1` checks and off-by-one bugs.  
- **Use `long long`** for sums when values or `n` are large to avoid overflow.  
- **Static arrays only:** prefix sums are ideal for static arrays; for frequent updates use Fenwick Tree or Segment Tree.  
- **2D memory caution:** 2D prefix sums use \(O(mn)\) memory—ensure it fits limits.  
- **Hashmap reserve:** when using `unordered_map` for prefix frequencies, `reserve(n)` can reduce rehash overhead.  
- **Edge cases:** empty array, single-element ranges, negative numbers, and large negative/positive sums.

---

## Quick Reference Table

| Technique              | Preprocess |                        Query or Update |     Space |
| ---------------------- | ---------: | -------------------------------------: | --------: |
| 1D Prefix Sum          |   \(O(n)\) |               \(O(1)\) per range query |  \(O(n)\) |
| Subarray sum = K (map) |       none |                         \(O(n)\) total |  \(O(n)\) |
| Difference Array       |       none | \(O(1)\) per update; \(O(n)\) finalize |  \(O(n)\) |
| 2D Prefix Sum          |  \(O(mn)\) |           \(O(1)\) per rectangle query | \(O(mn)\) |

---

## Exercises
1. **Range Sum Query** — build prefix and answer queries.  
2. **Count subarrays with sum K** — implement prefix + hashmap.  
3. **Range increments** — apply `q` updates with difference array and output final array.  
4. **Matrix rectangle sums** — implement 2D prefix sums and answer queries.  
5. **Longest equal 0/1 subarray** — convert `0 → -1`, use prefix map to find longest zero-sum subarray.

---

