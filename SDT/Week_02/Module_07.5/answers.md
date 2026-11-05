# Python OOP Concepts & Problem Solutions

---

## 1. Operator Overloading and Method Overriding

### A. Operator Overloading
**Operator Overloading** is the practice of extending or redefining the built-in behavior of standard operators (such as `+`, `-`, `*`, `>`, `<`, `==`) for user-defined classes. 

In Python, operators correspond to special "magic" or "dunder" (double underscore) methods. When an operator is used with class objects, Python invokes the corresponding dunder method behind the scenes:
- `+` calls `__add__(self, other)`
- `-` calls `__sub__(self, other)`
- `>` calls `__gt__(self, other)`
- `<` calls `__lt__(self, other)`
- `==` calls `__eq__(self, other)`

#### Example:
```python
class Book:
    def __init__(self, title: str, pages: int) -> None:
        self.title = title
        self.pages = pages

    # Overloading the '+' operator
    def __add__(self, other: "Book") -> int:
        return self.pages + other.pages

    def __str__(self) -> str:
        return f"'{self.title}' ({self.pages} pages)"

book1 = Book("Python Basics", 250)
book2 = Book("Advanced Python", 400)

# Uses overloaded '+' operator to sum pages
total_pages = book1 + book2
print(f"Total pages: {total_pages}")  # Output: Total pages: 650
```

---

### B. Method Overriding
**Method Overriding** occurs in inheritance when a child (subclass) provides its own specific implementation of a method that is already defined in its parent (superclass). 

When the overridden method is invoked on an instance of the child class, the child's implementation executes instead of the parent's implementation.

#### Example:
```python
class Animal:
    def speak(self) -> str:
        return "The animal makes a sound."

class Dog(Animal):
    # Overriding the parent's speak method
    def speak(self) -> str:
        return "The dog barks: Woof! Woof!"

class Cat(Animal):
    # Overriding the parent's speak method
    def speak(self) -> str:
        return "The cat meows: Meow!"

animal = Animal()
dog = Dog()
cat = Cat()

print(animal.speak())  # Output: The animal makes a sound.
print(dog.speak())     # Output: The dog barks: Woof! Woof!
print(cat.speak())     # Output: The cat meows: Meow!
```

---

## 2. Finding the Oldest Cricketer Using Operator Overloading

To compare which player is older using operators like `>` or `<`, we overload the comparison dunder methods `__gt__` (Greater Than) or `__lt__` (Less Than) inside the `Cricketer` (or `Person`) class.

### Complete Solution:

```python
class Person:
    def __init__(self, name: str, age: int, height: int, weight: int) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

class Cricketer(Person):
    def __init__(self, name: str, age: int, height: int, weight: int) -> None:
        super().__init__(name, age, height, weight)

    # Overloading the greater-than operator (>) to compare ages
    def __gt__(self, other: "Cricketer") -> bool:
        return self.age > other.age

    # Overloading the less-than operator (<) so functions like max() work automatically
    def __lt__(self, other: "Cricketer") -> bool:
        return self.age < other.age

    def __repr__(self) -> str:
        return f"Cricketer(name='{self.name}', age={self.age})"


# Instantiating the players
sakib = Cricketer('Sakib', 38, 68, 91)
musfiq = Cricketer('Rahim', 36, 68, 88)
kamal = Cricketer('Kamal', 39, 68, 94)
jack = Cricketer('Jack', 38, 68, 91)
kalam = Cricketer('Kalam', 37, 68, 95)

players = [sakib, musfiq, kamal, jack, kalam]

# Approach 1: Finding the oldest using a loop with the overloaded '>' operator
oldest_player = players[0]
for player in players[1:]:
    if player > oldest_player:  # Invokes __gt__ operator overloading
        oldest_player = player

print(f"Oldest player (via loop & > operator): {oldest_player.name} (Age: {oldest_player.age})")

# Approach 2: Using Python's built-in max() which leverages overloaded comparison operators
oldest_via_max = max(players)
print(f"Oldest player (via max()): {oldest_via_max.name} (Age: {oldest_via_max.age})")
```

### Output:
```text
Oldest player (via loop & > operator): Kamal (Age: 39)
Oldest player (via max()): Kamal (Age: 39)
```

---

## 3. Class Method vs Static Method (4 Key Differences)

| Feature | Class Method (`@classmethod`) | Static Method (`@staticmethod`) |
| :--- | :--- | :--- |
| **1. Decorator & Signature** | Decorated with `@classmethod`. Must take `cls` (the class object) as its first parameter. | Decorated with `@staticmethod`. Takes no implicit first parameter (neither `self` nor `cls`). |
| **2. State Access** | Can access and modify class-level state/variables through `cls`. | Cannot access or modify class state or instance state directly. |
| **3. Primary Purpose** | Used for factory methods, alternative constructors, and manipulating class-wide data. | Used for utility/helper functions that are logically scoped to the class but operate independently. |
| **4. Inheritance Behavior** | Aware of inheritance; when called on a subclass, `cls` points to the subclass. | Not bound to the class hierarchy dynamically; behaves like a plain function scoped inside the class. |

### Code Example:

```python
class Employee:
    # Class-level attribute
    company_name = "Tech Solutions"

    def __init__(self, name: str, salary: float) -> None:
        self.name = name
        self.salary = salary

    # --- Class Method ---
    # Acts as an alternative constructor / factory method and accesses class state via cls
    @classmethod
    def from_string(cls, emp_str: str) -> "Employee":
        name, salary = emp_str.split("-")
        return cls(name, float(salary))

    @classmethod
    def change_company(cls, new_name: str) -> None:
        cls.company_name = new_name

    # --- Static Method ---
    # Independent utility function; does not access cls or self
    @staticmethod
    def is_valid_salary(salary: float) -> bool:
        return salary >= 0


# Usage:
# 1. Using static method (pure utility check)
print(Employee.is_valid_salary(50000))  # Output: True
print(Employee.is_valid_salary(-1000))  # Output: False

# 2. Using class method (alternative constructor)
emp = Employee.from_string("Alice-75000")
print(emp.name, emp.salary, emp.company_name)  # Output: Alice 75000.0 Tech Solutions

# 3. Using class method to alter class state
Employee.change_company("Global Tech")
print(emp.company_name)  # Output: Global Tech
```

---

## 4. Getter and Setter

### What are Getters and Setters?
- **Getter**: A method that retrieves (reads) the value of a private or protected attribute.
- **Setter**: A method that assigns or updates (writes) the value of an attribute, often including **data validation** or preprocessing before storing it.

### Why Use Them?
1. **Encapsulation & Data Hiding**: Prevents direct external access to internal state.
2. **Validation**: Protects against invalid, corrupted, or out-of-range values.
3. **Flexibility**: Enables computed or read-only properties without altering public API access syntax.

In Python, the recommended way to implement getters and setters is using the built-in `@property` decorator and `@<attribute>.setter`.

### Code Example:

```python
class BankAccount:
    def __init__(self, owner: str, initial_balance: float) -> None:
        self.owner = owner
        self._balance = initial_balance  # Protected attribute (convention)

    # --- Getter ---
    @property
    def balance(self) -> float:
        """Getter: returns the current balance."""
        return self._balance

    # --- Setter ---
    @balance.setter
    def balance(self, amount: float) -> None:
        """Setter: validates the value before setting."""
        if amount < 0:
            raise ValueError("Balance cannot be negative!")
        self._balance = amount


# Usage:
account = BankAccount("Sakib", 1000.0)

# Reading value via getter (accessed like an attribute)
print(f"Account Balance: ${account.balance}")  # Output: Account Balance: $1000.0

# Updating value via setter with validation
account.balance = 1500.0
print(f"Updated Balance: ${account.balance}")  # Output: Updated Balance: $1500.0

# Attempting invalid update triggers validation error
try:
    account.balance = -500.0
except ValueError as e:
    print(f"Error: {e}")  # Output: Error: Balance cannot be negative!
```

---

## 5. Inheritance vs Composition

### Key Differences

| Criterion | Inheritance ("IS-A") | Composition ("HAS-A") |
| :--- | :--- | :--- |
| **Relationship** | Represents an **"IS-A"** relationship (e.g., A `Dog` *is an* `Animal`). | Represents a **"HAS-A"** relationship (e.g., A `Car` *has an* `Engine`). |
| **Coupling** | **Tight coupling**: Subclass is directly dependent on the implementation details of the parent. | **Loose coupling**: Components interact through well-defined interfaces without depending on internal details. |
| **Mechanism** | Subclass derives fields and behaviors from a base class (`class Child(Parent)`). | A class holds references to instances of other classes as attributes. |
| **Flexibility** | **Rigid**: Hierarchy is fixed at compile time; changes to parent can break child classes. | **Flexible**: Components can be easily swapped, injected, or altered dynamically at runtime. |
| **Design Principle** | Useful for true hierarchical specialization. | Follows the design principle: *"Favor object composition over class inheritance"*. |

---

### Example Comparison:

#### A. Inheritance Example ("IS-A")
```python
class Vehicle:
    def start(self) -> None:
        print("Vehicle is starting...")

# Car IS-A Vehicle
class Car(Vehicle):
    def drive(self) -> None:
        print("Car is driving on the road.")

my_car = Car()
my_car.start()
my_car.drive()
```

#### B. Composition Example ("HAS-A")
```python
class Engine:
    def __init__(self, horsepower: int) -> None:
        self.horsepower = horsepower

    def start(self) -> str:
        return f"Engine with {self.horsepower} HP is running."

class MusicSystem:
    def play_music(self, song: str) -> str:
        return f"Playing '{song}' on surround sound."

# Car HAS-AN Engine and HAS-A MusicSystem
class Car:
    def __init__(self, model: str, engine: Engine, music_system: MusicSystem) -> None:
        self.model = model
        self.engine = engine                # Composition
        self.music_system = music_system    # Composition

    def drive(self) -> None:
        print(f"{self.model}: {self.engine.start()}")

    def listen(self, song: str) -> None:
        print(f"{self.model}: {self.music_system.play_music(song)}")


# Assembling components flexibly:
v8_engine = Engine(450)
bose_system = MusicSystem()
mustang = Car("Ford Mustang", v8_engine, bose_system)

mustang.drive()
# Output: Ford Mustang: Engine with 450 HP is running.

mustang.listen("Hotel California")
# Output: Ford Mustang: Playing 'Hotel California' on surround sound.
```
