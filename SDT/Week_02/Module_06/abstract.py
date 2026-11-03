# abstract base class

from abc import ABC, abstractmethod


class Animal(ABC):
    @abstractmethod  # Enforce all derived class to have a eat methode
    def eat(self):
        print("i need food")
        pass

    @abstractmethod
    def move(self):
        pass


class Monkey(Animal):
    def __init__(self, name):
        self.name = name
        self.category = "Monkey"
        super().__init__()

    def eat(self):
        print("eat banana")

    def move(self):
        print("hanging on the branches")


layka = Monkey("lucky")

layka.eat()
