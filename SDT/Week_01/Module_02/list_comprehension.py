numbers = [1, 2, 3, 4, 5, 6, 7, 8]
print(numbers)
odds = []
for num in numbers:
    if num % 2 == 1:
        odds.append(num)

print(odds)

odd_nums = [num for num in numbers if num % 2 == 1]
