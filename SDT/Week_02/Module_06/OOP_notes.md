# 🧠 OOP Quick Recall Notes

> Personal reference sheet — Python examples included.

---

## What is OOP?

**Object-Oriented Programming** is a programming paradigm that organizes code around **objects** (instances of classes) rather than functions and logic alone.

- A **Class** is a blueprint.
- An **Object** is an instance built from that blueprint.

```python
class Dog:
    def __init__(self, name):
        self.name = name  # attribute

dog1 = Dog("Bruno")       # object / instance
print(dog1.name)          # Bruno
```

---

## The 4 Pillars of OOP

### 1. 🔒 Encapsulation
> **Bundling data (attributes) and methods together inside a class, and restricting direct access to internals.**

- Protects object state from outside interference.
- Use `_` (protected) or `__` (private) to signal restricted access.

```python
class BankAccount:
    def __init__(self, balance):
        self.__balance = balance  # private

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount

    def get_balance(self):
        return self.__balance

acc = BankAccount(1000)
acc.deposit(500)
print(acc.get_balance())  # 1500
# print(acc.__balance)    # ❌ AttributeError — can't access directly
```

---

### 2. 🧬 Inheritance
> **A child class inherits attributes and methods from a parent class, and can extend or override them.**

- Promotes code reuse.
- `super()` calls the parent class constructor or method.

```python
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        return "..."

class Dog(Animal):          # Dog inherits Animal
    def speak(self):        # override parent method
        return "Woof!"

class Cat(Animal):
    def speak(self):
        return "Meow!"

d = Dog("Bruno")
c = Cat("Whiskers")
print(d.name, d.speak())   # Bruno Woof!
print(c.name, c.speak())   # Whiskers Meow!
```

---

### 3. 🎭 Polymorphism
> **The same interface (method name) behaves differently depending on the object calling it.**

- "Many forms" — one method name, multiple behaviours.
- Works naturally through inheritance + method overriding.

```python
class Shape:
    def area(self):
        pass

class Circle(Shape):
    def __init__(self, r):
        self.r = r
    def area(self):
        return 3.14 * self.r ** 2

class Rectangle(Shape):
    def __init__(self, w, h):
        self.w = w
        self.h = h
    def area(self):
        return self.w * self.h

shapes = [Circle(5), Rectangle(4, 6)]
for s in shapes:
    print(s.area())   # 78.5 then 24 — same call, different result
```

---

### 4. 🫥 Abstraction
> **Hiding complex implementation details and exposing only what is necessary.**

- You show WHAT an object does, not HOW it does it.
- In Python, use `ABC` (Abstract Base Class) from the `abc` module.

```python
from abc import ABC, abstractmethod

class Vehicle(ABC):
    @abstractmethod
    def start_engine(self):   # must be implemented by subclasses
        pass

    def refuel(self):         # shared, non-abstract method
        print("Refueling...")

class Car(Vehicle):
    def start_engine(self):
        print("Car engine: Vroom!")

class Boat(Vehicle):
    def start_engine(self):
        print("Boat engine: Chug chug!")

# v = Vehicle()  # ❌ Can't instantiate abstract class
car = Car()
car.start_engine()   # Car engine: Vroom!
car.refuel()         # Refueling...
```

---

## 🔀 Abstraction vs Interface — What's the Difference?

|                 | **Abstraction (ABC)**          | **Interface (Protocol / pure ABC)**         |
| --------------- | ------------------------------ | ------------------------------------------- |
| **Purpose**     | Hide internal complexity       | Define a contract (what methods must exist) |
| **Can have**    | Abstract + concrete methods    | Only abstract methods (no implementation)   |
| **Inheritance** | `class Child(AbstractParent)`  | `class Child(Protocol)` or pure ABC         |
| **Python tool** | `ABC` + `@abstractmethod`      | `typing.Protocol` or ABC with all abstract  |
| **Focus**       | HOW things are partially built | WHAT things must be able to do              |

---

### Abstraction Example (ABC with shared logic)

```python
from abc import ABC, abstractmethod

class Payment(ABC):
    @abstractmethod
    def pay(self, amount):
        pass

    def receipt(self, amount):          # shared concrete method
        print(f"Receipt: paid {amount}")

class CreditCard(Payment):
    def pay(self, amount):
        print(f"Paid {amount} via Credit Card")

class Bkash(Payment):
    def pay(self, amount):
        print(f"Paid {amount} via Bkash")

c = CreditCard()
c.pay(500)        # Paid 500 via Credit Card
c.receipt(500)    # Receipt: paid 500  ← inherited from ABC
```

---

### Interface Example (`typing.Protocol` — duck typing)

```python
from typing import Protocol

class Drawable(Protocol):
    def draw(self) -> None: ...   # just the contract — no implementation

class Circle:
    def draw(self):
        print("Drawing Circle")

class Square:
    def draw(self):
        print("Drawing Square")

def render(shape: Drawable):
    shape.draw()

render(Circle())   # Drawing Circle
render(Square())   # Drawing Square
# No explicit inheritance needed — just implement the method!
```

---

### Key Difference in One Line

```
Abstraction  →  "Here's a partial blueprint; you MUST finish these parts."
Interface    →  "I don't care how you're built; just make sure you CAN do this."
```

---

## 🗂️ Quick Cheat Sheet

| Concept       | Keyword                   | Key Idea                              |
| ------------- | ------------------------- | ------------------------------------- |
| Encapsulation | `self.__attr`             | Hide internal state                   |
| Inheritance   | `class Child(Parent)`     | Reuse & extend                        |
| Polymorphism  | Override methods          | Same name, different behaviour        |
| Abstraction   | `ABC` + `@abstractmethod` | Hide complexity, force structure      |
| Interface     | `Protocol`                | Define a contract without inheritance |
| `super()`     | `super().__init__()`      | Call parent class method              |
| `__repr__`    | `def __repr__(self)`      | Custom string for `print(obj)`        |
| `__init__`    | Constructor               | Runs when object is created           |

---

> 💡 **Recall tip:** Think of a **TV remote** — you press buttons (interface), you don't know the circuit inside (abstraction), all remotes share basic buttons (inheritance), but each brand behaves slightly differently (polymorphism), and the battery compartment is hidden inside (encapsulation).
