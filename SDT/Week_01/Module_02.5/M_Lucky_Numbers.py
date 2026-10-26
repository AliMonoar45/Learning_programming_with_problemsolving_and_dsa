a, b = map(int, input().split())

lucky_numbers = []


for i in range(a, b + 1):
    s = str(i)

    if all(ch == "4" or ch == "7" for ch in s):
        lucky_numbers.append(str(i))

if lucky_numbers:
    print(*(lucky_numbers))
else:
    print(-1)
