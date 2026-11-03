# OOP: Method Overriding and Method Overloading in Python

A comprehensive reference guide on **Method Overriding**, **Method Overloading**, and **Operator Overloading** in Object-Oriented Programming (OOP) using Python.

---

## 1. Quick Comparison Summary

| Feature | Method Overriding | Method Overloading |
| :--- | :--- | :--- |
| **Concept** | Redefining a parent class method in a child class. | Defining multiple methods with the same name but different parameters. |
| **Polymorphism Type**| Runtime / Dynamic Polymorphism | Compile-time / Static Polymorphism |
| **Inheritance** | **Required** (exists between Parent and Child classes). | **Not Required** (can exist within the same class). |
| **Native Python Support** | Fully supported natively. | **Not supported natively** (last defined method replaces previous ones; handled pythonically via defaults, `*args`, or decorators). |
| **Purpose** | To provide specialized behavior for a subclass. | To allow a method to perform similar actions with varying inputs. |

---

## 2. Method Overriding (Runtime Polymorphism)

### What is Method Overriding?
Method overriding occurs when a subclass (child class) provides a specific implementation for a method that is already defined in its superclass (parent class).

### Key Rules:
1. There must be an inheritance relationship (parent-child).
2. The method name in the child class must be identical to the method in the parent class.
3. You can completely replace the parent behavior or extend it using `super()`.

### Code Example:

```python
class Person:
    def __init__(self, name: str, age: int):
        self.name = name
        self.age = age

    def eat(self):
        print(f"{self.name} is eating regular everyday food.")

    def exercise(self):
        # Base method enforcing subclasses to define or raising error
        raise NotImplementedError("Subclasses must implement this method")


class Cricketer(Person):
    def __init__(self, name: str, age: int, team: str):
        super().__init__(name, age)  # Call parent constructor
        self.team = team

    # 1. Complete Override: replaces parent method logic
    def eat(self):
        print(f"{self.name} is an athlete and eats a strict protein/vegetable diet.")

    # 2. Implementing an abstract/unimplemented method
    def exercise(self):
        print(f"{self.name} does 2 hours of gym and net practice.")


# --- Driver Code ---
person = Person("Rahim", 45)
cricketer = Cricketer("Shakib", 38, "Bangladesh")

person.eat()
# Output: Rahim is eating regular everyday food.

cricketer.eat()
# Output: Shakib is an athlete and eats a strict protein/vegetable diet.

cricketer.exercise()
# Output: Shakib does 2 hours of gym and net practice.
```

### Extending Parent Method with `super()`

Instead of completely discarding the parent implementation, you can call `super().method_name()` to reuse existing logic:

```python
class Employee:
    def get_details(self):
        return "Employee Details: standard contract"

class Manager(Employee):
    def get_details(self):
        # Extend parent output
        parent_details = super().get_details()
        return f"{parent_details} + Manager Perks (Bonus, Stock Options)"

m = Manager()
print(m.get_details())
# Output: Employee Details: standard contract + Manager Perks (Bonus, Stock Options)
```

---

## 3. Method Overloading (Compile-Time Polymorphism)

### Traditional Definition (C++ / Java)
Having multiple methods in the same class sharing the exact same name, but differing in:
- The number of arguments
- The types of arguments

### Why Python Does NOT Support Traditional Overloading
In Python, functions and methods are first-class objects. If you define two methods with the identical name in the same scope, **the second definition overwrites the first**.

```python
# What happens in Python if you try traditional overloading:
class Calculator:
    def add(self, a, b):
        return a + b

    def add(self, a, b, c):  # Overwrites the previous 'add'
        return a + b + c

calc = Calculator()
# calc.add(2, 3)        # -> TypeError: Calculator.add() missing 1 required positional argument: 'c'
print(calc.add(2, 3, 4)) # -> 9
```

---

### How to Achieve Method Overloading in Python (3 Ways)

#### Approach A: Default Arguments (Most Common & Pythonic)
Set default values (such as `None` or constants) to handle different parameter counts.

```python
class Calculator:
    def add(self, a, b, c=None):
        if c is not None:
            return a + b + c
        return a + b

calc = Calculator()
print(calc.add(10, 20))       # Output: 30 (2 arguments)
print(calc.add(10, 20, 30))   # Output: 60 (3 arguments)
```

#### Approach B: Variable Arguments (`*args` / `**kwargs`)
Accept an arbitrary number of positional or keyword arguments.

```python
class MathOperations:
    def sum_all(self, *args):
        return sum(args)

math_op = MathOperations()
print(math_op.sum_all(5, 10))             # Output: 15
print(math_op.sum_all(1, 2, 3, 4, 5))     # Output: 15
```

#### Approach C: Type-Based Overloading using `functools.singledispatchmethod`
Standard library solution (available since Python 3.8) to overload methods based on argument types.

```python
from functools import singledispatchmethod

class Formatter:
    @singledispatchmethod
    def format_data(self, data):
        raise NotImplementedError(f"Unsupported type: {type(data)}")

    # Overload for integers
    @format_data.register
    def _(self, data: int):
        return f"Integer formatted: {data:,}"

    # Overload for strings
    @format_data.register
    def _(self, data: str):
        return f"String formatted: '{data.strip().title()}'"

    # Overload for lists
    @format_data.register
    def _(self, data: list):
        return f"List formatted: {', '.join(map(str, data))}"

fmt = Formatter()
print(fmt.format_data(1000000))          # Output: Integer formatted: 1,000,000
print(fmt.format_data("  hello world "))  # Output: String formatted: 'Hello World'
print(fmt.format_data([1, 2, 3, 4]))     # Output: List formatted: 1, 2, 3, 4
```

---

## 4. Bonus: Operator Overloading in Python

In Python, operator overloading is a special form of overloading where built-in operators (`+`, `-`, `*`, `>`, `==`, etc.) are customized using **Magic / Dunder (Double Underscore) Methods**.

### Common Operator Dunder Methods:
| Operator | Method | Expression |
| :--- | :--- | :--- |
| `+` | `__add__(self, other)` | `a + b` |
| `-` | `__sub__(self, other)` | `a - b` |
| `*` | `__mul__(self, other)` | `a * b` |
| `>` | `__gt__(self, other)` | `a > b` |
| `<` | `__lt__(self, other)` | `a < b` |
| `==` | `__eq__(self, other)` | `a == b` |
| `str()` / `print()` | `__str__(self)` | Readable string representation |

### Code Example:

```python
class Cricketer:
    def __init__(self, name: str, age: int, runs: int):
        self.name = name
        self.age = age
        self.runs = runs

    # Operator Overloading for '+'
    def __add__(self, other: "Cricketer") -> int:
        return self.runs + other.runs

    # Operator Overloading for '>'
    def __gt__(self, other: "Cricketer") -> bool:
        return self.runs > other.runs

    # String representation for print()
    def __str__(self) -> str:
        return f"{self.name} (Age: {self.age}, Runs: {self.runs})"


sakib = Cricketer("Sakib", 38, 12000)
mushfiq = Cricketer("Mushfiq", 36, 11500)

# Overloaded '+' operator: combines runs
total_runs = sakib + mushfiq
print(f"Combined Runs: {total_runs}")
# Output: Combined Runs: 23500

# Overloaded '>' operator: compares runs
if sakib > mushfiq:
    print(f"{sakib.name} has more runs than {mushfiq.name}")
# Output: Sakib has more runs than Mushfiq
```

---

## 5. Cheat Sheet / Key Takeaways

1. **Method Overriding**:
   - Happens across **Parent and Child** classes.
   - Child replaces or extends parent method.
   - Use `super().method_name()` to call the parent version.

2. **Method Overloading**:
   - Multiple signatures for the same function name.
   - **Not natively supported** in Python syntax like in Java/C++.
   - Solved in Python via:
     - `def func(a, b=None)` (Default arguments)
     - `def func(*args, **kwargs)` (Arbitrary arguments)
     - `@singledispatchmethod` from `functools` (Type-based dispatch)

3. **Operator Overloading**:
   - Redefining how operators (`+`, `-`, `>`, etc.) behave with custom objects using dunder methods (`__add__`, `__sub__`, `__gt__`).
