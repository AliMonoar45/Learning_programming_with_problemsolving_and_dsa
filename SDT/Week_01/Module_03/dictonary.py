nummers = [12, 56, 65, 43, 33, 33, 33, 22, 33, 33, 44, 44, 55, 55, 12, 12, 12]

person = {"name": "Kawsar Ahmed", "age": 22, "job": "Student", "country": "Bangladesh"}
# print(person)
# print(type(person))
# key value pair
# dictonary
# object
# has table
# overlap with set

person1 = {"name": "kala chan", "address": "village", "age": 25, "job": "thikana nai"}
# print(person1)
# print(person1['address'])
# print(person1.keys())
# print(person1.values())
# person1['salary'] = 10000
# print(person1)
# person1['age']=30
# print(person1)


for key, value in person1.items():
    print(key, value)

for num in nummers:
    print(num)

for i, num in enumerate(nummers):
    print(i, num)
