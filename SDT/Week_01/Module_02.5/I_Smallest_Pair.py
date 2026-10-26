t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    min_val = float("inf")

    for i in range(n):
        for j in range(i + 1, n):
            val = a[i] + a[j] + j - i
            if val < min_val:
                min_val = val

    print(min_val)
