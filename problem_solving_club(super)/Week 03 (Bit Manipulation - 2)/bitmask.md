### Bitwise Operations Cheat Sheet

#### Overview
A compact, copy‑ready C++ note covering common bit operations, **manual checks**, and **builtin functions**. Paste this into your `.md` file. All examples use standard C++ and assume 32‑ or 64‑bit integers where noted.

---

### Basic Bit Operations
**Set bit i**
```cpp
inline void setBit(int &x, int i) { x |= (1 << i); }
```

**Clear bit i**
```cpp
inline void clearBit(int &x, int i) { x &= ~(1 << i); }
```

**Toggle bit i**
```cpp
inline void toggleBit(int &x, int i) { x ^= (1 << i); }
```

**Test bit i**
```cpp
inline bool isSet(int x, int i) { return (x & (1 << i)) != 0; }
```

**Left shift and Right shift**
```cpp
// Left shift multiplies by 2^k for nonnegative integers
int left = x << k;   // x * (1 << k)

// Right shift divides by 2^k (floor for nonnegative)
int right = x >> k;  // floor(x / (1 << k))
```

**Check power of two**
```cpp
inline bool isPowerOfTwo(unsigned int x) {
    return x > 0 && (x & (x - 1)) == 0;
}
```

---

### LSB MSB and Bit Tricks
**Extract least significant set bit (value)**
```cpp
inline int lsbValue(int x) { return x & -x; } // works for signed two's complement
```

**Remove least significant set bit**
```cpp
inline int removeLSB(int x) { return x & (x - 1); }
```

**Mask for bit range [l, r] inclusive**
```cpp
inline int rangeMask(int l, int r) {
    return ((1u << (r - l + 1)) - 1) << l;
}
```

**Manual index of LSB (returns -1 if x == 0)**
```cpp
inline int lsbIndexManual(unsigned int x) {
    if (x == 0) return -1;
    int idx = 0;
    while ((x & 1u) == 0) { x >>= 1; ++idx; }
    return idx;
}
```

**Manual index of MSB (returns -1 if x == 0)**
```cpp
inline int msbIndexManual(unsigned int x) {
    if (x == 0) return -1;
    int idx = 0;
    while (x >>= 1) ++idx;
    return idx;
}
```

---

### Builtin Functions and Manual Implementations
**Builtins (GCC/Clang, for unsigned types)**  
- **Count set bits**: `__builtin_popcount(x)` (32‑bit), `__builtin_popcountll(x)` (64‑bit)  
- **Count trailing zeros** (index of LSB): `__builtin_ctz(x)` (undefined for x==0)  
- **Count leading zeros**: `__builtin_clz(x)` (undefined for x==0) — MSB index = `31 - __builtin_clz(x)` for 32‑bit, `63 - __builtin_clzll(x)` for 64‑bit

**Examples**
```cpp
unsigned int x = 0b1011000u;
int cnt32 = __builtin_popcount(x);        // number of 1s
int lsbIdx = (x == 0) ? -1 : __builtin_ctz(x); // index of LSB
int msbIdx = (x == 0) ? -1 : 31 - __builtin_clz(x); // index of MSB for 32-bit
```

**Manual popcount (Kernighan's method)**
```cpp
inline int popcountManual(unsigned int x) {
    int cnt = 0;
    while (x) {
        x &= (x - 1);
        ++cnt;
    }
    return cnt;
}
```

**Manual msb using bit_length idea**
```cpp
inline int msbIndexBitLength(unsigned long long x) {
    return x ? (int) (64 - __builtin_clzll(x) - 1) : -1; // uses builtin clzll
}
// Or fully manual:
inline int msbIndexManualULL(unsigned long long x) {
    if (x == 0) return -1;
    int idx = 0;
    while (x >>= 1) ++idx;
    return idx;
}
```

---

### Complete C++ Example with Manual Checks and Builtins
```cpp
#include <bits/stdc++.h>
using namespace std;

// Basic ops
inline void setBit(unsigned int &x, int i) { x |= (1u << i); }
inline void clearBit(unsigned int &x, int i) { x &= ~(1u << i); }
inline void toggleBit(unsigned int &x, int i) { x ^= (1u << i); }
inline bool isSet(unsigned int x, int i) { return (x & (1u << i)) != 0; }
inline bool isPowerOfTwo(unsigned int x) { return x > 0 && (x & (x - 1)) == 0; }

// LSB / MSB tricks
inline unsigned int lsbValue(unsigned int x) { return x & (unsigned int)(-(int)x); }
inline unsigned int removeLSB(unsigned int x) { return x & (x - 1); }
inline unsigned int rangeMask(int l, int r) {
    return (((1u << (r - l + 1)) - 1u) << l);
}

// Manual implementations
inline int lsbIndexManual(unsigned int x) {
    if (x == 0) return -1;
    int idx = 0;
    while ((x & 1u) == 0) { x >>= 1; ++idx; }
    return idx;
}
inline int msbIndexManual(unsigned int x) {
    if (x == 0) return -1;
    int idx = 0;
    while (x >>= 1) ++idx;
    return idx;
}
inline int popcountManual(unsigned int x) {
    int cnt = 0;
    while (x) { x &= (x - 1); ++cnt; }
    return cnt;
}

// Demo tests
int main() {
    unsigned int x = 0b0101u; // 5
    cout << "Initial x = " << x << " (bin 0101)\n";

    setBit(x, 1); // set bit 1 -> 0111 (7)
    cout << "After setBit 1: " << x << "\n";

    clearBit(x, 1); // -> 0101 (5)
    cout << "After clearBit 1: " << x << "\n";

    toggleBit(x, 2); // flip bit 2 -> 0001 (1)
    cout << "After toggleBit 2: " << x << "\n";

    cout << "isSet bit 2: " << isSet(x, 2) << "\n";
    cout << "isPowerOfTwo(8): " << isPowerOfTwo(8) << "\n";
    cout << "isPowerOfTwo(12): " << isPowerOfTwo(12) << "\n";

    unsigned int y = 0b1011000u; // 88
    cout << "y = " << y << " (bin 1011000)\n";
    cout << "lsbValue(y): " << lsbValue(y) << "\n";
    cout << "removeLSB(y): " << removeLSB(y) << "\n";
    cout << "rangeMask(2,5): " << rangeMask(2,5) << "\n";

    // Manual vs builtin
    cout << "popcountManual(y): " << popcountManual(y) << "\n";
    cout << "__builtin_popcount(y): " << __builtin_popcount(y) << "\n";

    cout << "lsbIndexManual(y): " << lsbIndexManual(y) << "\n";
    cout << "msbIndexManual(y): " << msbIndexManual(y) << "\n";

    // Builtins (careful with x == 0)
    unsigned int z = y;
    cout << "builtin ctz (lsb index): " << (z ? __builtin_ctz(z) : -1) << "\n";
    cout << "builtin clz (msb index): " << (z ? 31 - __builtin_clz(z) : -1) << "\n";

    // 64-bit examples
    unsigned long long big = (1ULL << 50) + (1ULL << 3);
    cout << "big msbIndex using clzll: " << (big ? 63 - __builtin_clzll(big) : -1) << "\n";
    cout << "big popcountll: " << __builtin_popcountll(big) << "\n";

    return 0;
}
```

---

I'll summarize and produce a focused, **C++-only bitmasking note** tailored to the Phitron bitmasks module you have open. First I pulled the content of your active Phitron tab to ensure the note aligns with that lesson. Below is a single, copy‑ready Markdown note you can paste into your `.md` file. It contains:

- concise explanations of bitmasking concepts,
- safe/portable C++ patterns,
- `constexpr` helpers,
- manual implementations and builtin alternatives,
- common bitmasking patterns used in competitive programming (flags, subsets, DP over masks),
- worked examples and small test snippets,
- references to the source tab for context.

> **Source:** Phitron module page. 

---

### Bitmasking — C++ Cheat Sheet (Phitron‑aligned)


# Bitmasking — C++ Cheat Sheet

**Context:** Notes aligned with the Phitron "Bitmasks" module. Source: Phitron module page. 

---

## Why bitmasks
- Represent a set of boolean flags compactly using integer bits.
- Fast bitwise operations (`&`, `|`, `^`, `~`, `<<`, `>>`).
- Common in competitive programming: subsets iteration, DP over subsets, state compression, flags.

**Use unsigned types** (`uint32_t`, `uint64_t`) to avoid implementation-defined behavior on right shifts and sign extension.

---

## Basic building blocks

```cpp
#include <cstdint>
#include <bitset>
#include <iostream>
#include <vector>
using namespace std;

using u32 = uint32_t;
using u64 = uint64_t;
```

### Single-bit helpers

```cpp
// mask for bit i (0-based)
constexpr u32 bit(int i) { return 1u << i; }
constexpr u64 bit64(int i) { return 1ull << i; }
```

### Test / Set / Clear / Toggle

```cpp
inline bool test(u32 mask, int i) { return (mask & bit(i)) != 0u; }
inline void setBit(u32 &mask, int i) { mask |= bit(i); }
inline void clearBit(u32 &mask, int i) { mask &= ~bit(i); }
inline void toggleBit(u32 &mask, int i) { mask ^= bit(i); }
```

**Safety:** ensure `0 <= i < 32` for `u32`, `0 <= i < 64` for `u64`.

---

## Common bit operations

```cpp
// check if exactly one bit is set (power of two)
inline bool isPowerOfTwo(u32 x) { return x != 0u && (x & (x - 1u)) == 0u; }

// extract least significant set bit (value)
inline u32 lsbValue(u32 x) { return x & static_cast<u32>(-static_cast<int>(x)); }

// remove least significant set bit
inline u32 removeLSB(u32 x) { return x & (x - 1u); }
```

**Index helpers**

```cpp
// manual LSB index (returns -1 if zero)
inline int lsbIndexManual(u32 x) {
    if (x == 0u) return -1;
    int idx = 0;
    while ((x & 1u) == 0u) { x >>= 1; ++idx; }
    return idx;
}

// manual MSB index (returns -1 if zero)
inline int msbIndexManual(u32 x) {
    if (x == 0u) return -1;
    int idx = 0;
    while (x >>= 1) ++idx;
    return idx;
}
```

**Builtins (GCC/Clang) — guard x==0**

```cpp
// popcount
int cnt = __builtin_popcount(mask);          // 32-bit
long long cnt64 = __builtin_popcountll(mask64); // 64-bit

// index of LSB (count trailing zeros)
int lsbIdx = mask ? __builtin_ctz(mask) : -1;

// index of MSB (using leading zeros)
int msbIdx = mask ? 31 - __builtin_clz(mask) : -1; // 32-bit
```

---

## Masks for ranges and flags

```cpp
// mask with bits [l..r] set (0 <= l <= r < 32)
inline u32 rangeMask(int l, int r) {
    // (r-l+1) < 32 required
    return (((1u << (r - l + 1)) - 1u) << l);
}

// toggle bits in [l..r]
inline u32 toggleRange(u32 x, int l, int r) {
    return x ^ rangeMask(l, r);
}
```

**constexpr variants**

```cpp
constexpr u32 cbit(int i) { return 1u << i; }
constexpr u32 cmask(int l, int r) { return (((1u << (r - l + 1)) - 1u) << l); }
```

---

## Iterating subsets of a mask

- Iterate all submasks of `mask` (non-empty and including zero):

```cpp
for (u32 sub = mask; ; sub = (sub - 1u) & mask) {
    // process sub
    if (sub == 0u) break;
}
```

- Iterate only non-zero submasks:

```cpp
for (u32 sub = mask; sub; sub = (sub - 1u) & mask) {
    // process sub
}
```

**Pattern use-cases:** DP over subsets, checking all combinations of selected items.

---

## Enumerating bits set in a mask

```cpp
u32 m = mask;
while (m) {
    u32 low = m & -static_cast<int>(m); // lsb value
    int i = __builtin_ctz(m);           // index of that bit
    // use i
    m &= (m - 1u); // remove lsb
}
```

This is efficient: loops only over set bits (O(popcount)).

---

## Typical competitive programming patterns

### 1) Flags for small N (N ≤ 20)
- Use `int` mask where bit `i` indicates inclusion of item `i`.
- Loop `for (int mask = 0; mask < (1<<N); ++mask)` to enumerate all subsets.

### 2) DP over subsets (bitmask DP)
- Example: TSP DP `dp[mask][last]` where `mask` is visited set.
- Memory: `O(2^N * N)`. Use `vector<int>` sized `(1<<N)` for per-last arrays.

### 3) Meet-in-the-middle
- Split N into two halves, enumerate subsets of each half using masks, combine results.

---

## Small worked examples

### Example A — toggle flags and check

```cpp
#include <bits/stdc++.h>
using namespace std;
using u32 = uint32_t;

int main() {
    u32 flags = 0u;
    setBit(flags, 0); // enable feature 0
    setBit(flags, 3); // enable feature 3
    cout << "flags: " << bitset<8>(flags) << "\n"; // 00001001

    // toggle feature 3
    toggleBit(flags, 3);
    cout << "after toggle: " << bitset<8>(flags) << "\n"; // 00000001

    // test
    cout << "feature 0: " << test(flags, 0) << "\n";
    cout << "feature 3: " << test(flags, 3) << "\n";
    return 0;
}
```

### Example B — iterate submasks

```cpp
#include <bits/stdc++.h>
using namespace std;
using u32 = uint32_t;

int main() {
    u32 mask = (1u<<0) | (1u<<2) | (1u<<3); // bits 0,2,3
    for (u32 sub = mask; ; sub = (sub - 1u) & mask) {
        cout << bitset<4>(sub) << "\n";
        if (sub == 0u) break;
    }
    return 0;
}
```

Output (order: mask down to 0):
```
1101
1100
1001
1000
0101
0100
0001
0000
```

---

## Performance and portability notes
- Prefer `u32`/`u64` for clarity and portability.
- Guard builtins (`__builtin_ctz`, `__builtin_clz`) with `x != 0` because they are undefined for zero.
- Avoid shifting by the bitwidth or more (e.g., `1u << 32` is undefined for 32-bit `unsigned int`).
- For MSVC, use `_BitScanForward` / `_BitScanReverse` intrinsics or manual loops.

---

## Quick reference table

| Task              | Expression (32-bit)                    |
| ----------------- | -------------------------------------- |
| set bit i         | `mask                                  | = (1u << i)` |
| clear bit i       | `mask &= ~(1u << i)`                   |
| toggle bit i      | `mask ^= (1u << i)`                    |
| test bit i        | `(mask & (1u << i)) != 0u`             |
| lsb value         | `mask & -static_cast<int>(mask)`       |
| remove lsb        | `mask &= (mask - 1u)`                  |
| popcount          | `__builtin_popcount(mask)`             |
| lsb index         | `mask ? __builtin_ctz(mask) : -1`      |
| msb index         | `mask ? 31 - __builtin_clz(mask) : -1` |
| range mask [l..r] | `(((1u << (r-l+1)) - 1u) << l)`        |

---

## Exercises (practice)
1. Given `N ≤ 20`, count subsets whose sum equals `S` using masks.  
2. Implement DP over subsets for Hamiltonian path / TSP small N.  
3. Given mask `m`, print all subsets of `m` in increasing order (by integer value).  
4. Given `mask`, find the next higher integer with the same popcount (next permutation of bits).

---

## References
- Phitron bitmasks module (your current tab). 

---