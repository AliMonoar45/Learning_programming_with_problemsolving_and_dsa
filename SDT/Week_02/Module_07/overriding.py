class Persion:
    def __init__(self, name, age, height, weight):
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print("vat,mangso,polau,korma")

    def exercise(self):
        raise NotImplementedError


class Cricketer(Persion):
    def __init__(self, name, age, height, weight, team):
        self.team = team
        super().__init__(name, age, height, weight)

    # override
    def eat(self):
        print("vegetables")

    def exercise(self):
        print("gym kore")

    def __add__(self, other):
        return self.age + other.age


sakib = Cricketer("sakib", 38, 68, 91, "BD")
musi = Cricketer("musi", 36, 65, 78, "BD")

# sakib.eat()
# sakib.exercise()

print(sakib+ musi)
