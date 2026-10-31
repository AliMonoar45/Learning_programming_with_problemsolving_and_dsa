n = int(input())
a = list(map(int, input().split()))


min_index = a.index(min(a))
max_index = a.index(max(a))


a[min_index], a[max_index] = a[max_index], a[min_index]

print(*a)
