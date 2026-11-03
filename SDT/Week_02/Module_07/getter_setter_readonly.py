class User:
    def __init__(self, name, age, money):
        self._name = name
        self._age = age
        self.__money = money

    # to use methode like attribute use @property
    # methode
    @property
    def age(self):
        return self._age

    # getter without setter is read only
    @property
    def salary(self):
        return self.__money

    # setter
    @salary.setter
    def salary(self, value):
        if value < 0:
            return "salary can not be negative"
        self.__money += value


samsu = User("kopa", 21, 12000)

# print(samsu.__money)
# print(samsu.age())
print(samsu.age)
print(samsu.salary)
samsu.salary = 4500
print(samsu.salary) 