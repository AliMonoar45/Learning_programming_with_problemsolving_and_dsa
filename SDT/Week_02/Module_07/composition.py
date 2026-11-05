class Animal:
    pass


class Tiger(Animal):
    pass


class Monkey(Animal):
    pass


class Furniture:
    pass


class Chair(Furniture):
    pass


class Table(Furniture):
    pass


# inheritance gives "is a " relation


class Engine:
    def __init__(self):
        pass

    def start(self):
        return "Engine Started"


class Driver:
    def __init__(self):
        pass


# cas ' has a ' relation


class Car:
    def __init__(self):
        self.engine = Engine()
        self.driver = Driver()

    def start(self):
        self.start()