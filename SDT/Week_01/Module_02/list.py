"""# thisList = ['apple','banana','cherry']
# print(thisList)

thislist = ["apple", "banana", "cherry", "apple",'melon','guava']
print(thislist)

print(len(thislist))

list1 = ["abc", 34, True, 40, "male"]


mylist = ["apple", "banana", "cherry"]
print(type(mylist))

islist = list(("apple", "banana", "cherry"))  # note the double round-brackets
print(islist)


print(thislist[2:5])

print(thislist[:4])

print(thislist[2:])

print(thislist[-4:-1])

if "apple" in thislist:
    print("Yes, 'apple' is in the fruits list")


thislist[1:3] = ["blackcurrant", "watermelon"]
print(thislist)

thislist.insert(2,'mango')
print(thislist)"""

# thislist = ["apple", "banana", "cherry"]
# tropical = ["mango", "pineapple", "papaya"]
# thislist.extend(tropical)
# print(thislist)


""" Add Any Iterable
The extend() method does not have to append lists, you can add any iterable object (tuples, sets, dictionaries etc.).

Example
Add elements of a tuple to a list: """

""" thislist = ["apple", "banana", "cherry"]
thistuple = ("kiwi", "orange")
thislist.extend(thistuple)
print(thislist) """

""" thislist = ["apple", "banana", "cherry"]
for x in thislist:
    print(x)
 """

# thislist = ["apple", "banana", "cherry"]
# for i in range(len(thislist)):
#     print(thislist[i])


# thislist = ["apple", "banana", "cherry"]
# i = 0
# while i < len(thislist):
#     print(thislist[i])
#     i = i + 1


# thislist = ["apple", "banana", "cherry"]
# [print(x) for x in thislist]


# long form
# fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
# newlist = []

# for x in fruits:
#     if "a" in x:
#         newlist.append(x)

# print(newlist)

# sort from
# fruits = ["apple", "banana", "cherry", "kiwi", "mango"]

# newlist = [x for x in fruits if "a" in x]

# print(newlist)


""" List Methods
Python has a set of built-in methods that you can use on lists.

Method	Description
append()	Adds an element at the end of the list
clear()	Removes all the elements from the list
copy()	Returns a copy of the list
count()	Returns the number of elements with the specified value
extend()	Add the elements of a list (or any iterable), to the end of the current list
index()	Returns the index of the first element with the specified value
insert()	Adds an element at the specified position
pop()	Removes the element at the specified position
remove()	Removes the item with the specified value
reverse()	Reverses the order of the list
sort()	Sorts the list
 """

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
numbers.append(10)
print(numbers)
numbers.insert(0, 71)
print(numbers)

if 71 in numbers:
    numbers.remove(71)
else:
    print("number 71 dose not exist")
if 75 in numbers:
    numbers.remove(75)
else:
    print("number 75 dose not esist")
print(numbers)

last = numbers.pop()
print(last)