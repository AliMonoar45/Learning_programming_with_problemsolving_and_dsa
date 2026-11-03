# poly -> many
# morph -> shape


class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        print("animal making some sound")


class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("meow meow")


class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("wofh wofh")


class Goat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("bah bah")


don = Cat("Real don")

# don.make_sound()

desi = Dog("kutta")
# desi.make_sound()

black_bangle = Goat("ramu")
# black_bangle.make_sound()

forain = Goat("dainel")
# forain.make_sound()

animals = [don, desi, black_bangle, forain]

for animal in animals:
    animal.make_sound()
