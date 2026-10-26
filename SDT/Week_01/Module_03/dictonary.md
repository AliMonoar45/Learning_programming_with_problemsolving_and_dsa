# 📘 Python Dictionaries & Built-in Methods: Comprehensive Reference Guide

> A complete, beginner-to-advanced reference guide covering Python dictionary fundamentals, internal hash table mechanics, all built-in methods, global functions, modern operators, iteration techniques, dictionary comprehensions, performance complexities, and common gotchas with real-world code examples.

---

## 📑 Table of Contents

1. [Dictionary Fundamentals & Core Concepts](#1-dictionary-fundamentals--core-concepts)
   - [What is a Dictionary?](#what-is-a-dictionary)
   - [Key Characteristics of Dictionaries](#key-characteristics-of-dictionaries)
   - [Hash Tables & The Hashability Rule](#hash-tables--the-hashability-rule)
   - [Valid vs. Invalid Dictionary Keys](#valid-vs-invalid-dictionary-keys)
   - [Ways to Create Dictionaries](#ways-to-create-dictionaries)
2. [Accessing, Adding & Modifying Elements](#2-accessing-adding--modifying-elements)
   - [Accessing Values: Bracket `[]` vs. `.get()`](#accessing-values-bracket--vs-get)
   - [Adding and Updating Entries](#adding-and-updating-entries)
   - [Nested Dictionaries](#nested-dictionaries)
3. [Comprehensive Guide to All Built-in Dictionary Methods](#3-comprehensive-guide-to-all-built-in-dictionary-methods)
   - [`dict.clear()`](#1-clear)
   - [`dict.copy()`](#2-copy)
   - [`dict.fromkeys()`](#3-fromkeys)
   - [`dict.get()`](#4-get)
   - [`dict.items()`](#5-items)
   - [`dict.keys()`](#6-keys)
   - [`dict.values()`](#7-values)
   - [`dict.pop()`](#8-pop)
   - [`dict.popitem()`](#9-popitem)
   - [`dict.setdefault()`](#10-setdefault)
   - [`dict.update()`](#11-update)
4. [Dictionary Views & Set Operations](#4-dictionary-views--set-operations)
   - [Dynamic Nature of Dictionary Views](#dynamic-nature-of-dictionary-views)
   - [Set-like Operations on Keys and Items](#set-like-operations-on-keys-and-items)
5. [Iterating Over Dictionaries](#5-iterating-over-dictionaries)
   - [Looping Over Keys, Values, and Items](#looping-over-keys-values-and-items)
   - [Using `enumerate()` with Dictionaries](#using-enumerate-with-dictionaries)
   - [Modifying a Dictionary During Iteration (Gotcha & Fix)](#modifying-a-dictionary-during-iteration-gotcha--fix)
6. [Modern Dictionary Operators (Python 3.9+)](#6-modern-dictionary-operators-python-39)
   - [Merge Operator (`|`)](#merge-operator-)
   - [Update Operator (`|=`)](#update-operator-)
   - [Dictionary Unpacking (`**`)](#dictionary-unpacking-)
   - [Membership Operators (`in`, `not in`)](#membership-operators-in-not-in)
7. [Global Built-in Functions Used with Dictionaries](#7-global-built-in-functions-used-with-dictionaries)
   - [`len()`, `min()`, `max()`, `sum()`](#aggregation-functions)
   - [`sorted()`, `reversed()`](#ordering-functions)
   - [`any()`, `all()`](#boolean-evaluation)
   - [`zip()` for Dictionary Construction](#zip-for-dictionary-construction)
8. [Dictionary Comprehensions](#8-dictionary-comprehensions)
   - [Basic Syntax & Filtering](#basic-syntax--filtering)
   - [Inverting Keys and Values](#inverting-keys-and-values)
   - [Nested Comprehensions](#nested-comprehensions)
9. [Advanced Standard Library Types (`collections`)](#9-advanced-standard-library-types-collections)
   - [`collections.defaultdict`](#collectionsdefaultdict)
   - [`collections.Counter`](#collectionscounter)
   - [`collections.OrderedDict`](#collectionsordereddict)
   - [`types.MappingProxyType` (Read-Only Dictionaries)](#typesmappingproxytype-read-only-dictionaries)
10. [Master Quick-Reference Cheat Sheet & Big-O Complexity](#10-master-quick-reference-cheat-sheet--big-o-complexity)
11. [Common Gotchas & Best Practices](#11-common-gotchas--best-practices)

---

## 1. Dictionary Fundamentals & Core Concepts

### What is a Dictionary?

A **dictionary** in Python is a built-in mapping collection type (`dict`) that stores data in **key-value pairs**. Rather than indexing elements by numerical positions (like lists or tuples `[0, 1, 2]`), dictionaries index values by custom, meaningful **keys**.

```python
person = {
    "name": "Kawsar Ahmed",
    "age": 22,
    "job": "Student",
    "country": "Bangladesh"
}

print(type(person))  # <class 'dict'>
print(person)        # {'name': 'Kawsar Ahmed', 'age': 22, 'job': 'Student', 'country': 'Bangladesh'}
```

---

### Key Characteristics of Dictionaries

| Characteristic        | Description                                                                                                |
| :-------------------- | :--------------------------------------------------------------------------------------------------------- |
| **Key-Value Mapping** | Each element consists of a `key: value` pair.                                                              |
| **Ordered**           | Since Python 3.7+, dictionaries officially preserve the **insertion order** of keys.                       |
| **Mutable**           | You can add, modify, or remove key-value pairs after creation.                                             |
| **Unique Keys**       | Keys must be unique; duplicate keys overwrite earlier ones.                                                |
| **Flexible Values**   | Values can be of **any data type** (int, str, list, another dict, function, etc.) and can have duplicates. |
| **Key Hashability**   | Keys **must be hashable** (immutable objects like strings, numbers, or tuples).                            |

---

### Hash Tables & The Hashability Rule

Under the hood, Python dictionaries are implemented using **Hash Tables**.

- When you set `d[key] = value`, Python executes `hash(key)` to compute an integer hash value.
- This hash value maps directly to an index in memory where the key and value reference are stored.
- Because of this direct hashing, looking up, adding, or deleting a key in a dictionary takes average **$O(1)$ (Constant Time)**.

> [!NOTE]
> An object is **hashable** if it has a hash value that never changes during its lifetime (implements `__hash__()`) and can be compared to other objects (implements `__eq__()`).
>
> - ✅ **Hashable (Can be keys):** `str`, `int`, `float`, `bool`, `tuple` (containing only hashable items), `frozenset`, `None`.
> - ❌ **Unhashable (Cannot be keys):** `list`, `dict`, `set` (because they are mutable).

---

### Valid vs. Invalid Dictionary Keys

```python
# ✅ VALID KEYS (Immutable / Hashable types)
valid_dict = {
    "username": "coder123",       # string
    101: "Admin",                  # integer
    3.14: "Pi",                    # float
    True: "Flag is on",            # boolean (Note: True == 1 in Python!)
    (10, 20): "Coordinates",       # tuple with immutable elements
    None: "Empty Key"              # NoneType
}

# ❌ INVALID KEYS (Mutable / Unhashable types raise TypeError)
# bad_dict = { [1, 2]: "List key" }     # 💥 TypeError: unhashable type: 'list'
# bad_dict = { {"a": 1}: "Dict key" }   # 💥 TypeError: unhashable type: 'dict'
# bad_dict = { {1, 2}: "Set key" }      # 💥 TypeError: unhashable type: 'set'
# bad_dict = { ([1, 2], 3): "Tuple with list" } # 💥 TypeError: unhashable type: 'list'
```

> [!WARNING]
> In Python, `1 == True` and `0 == False`. If you use both `1` and `True` as keys in the same dictionary, the second one will **overwrite** the first because `hash(1) == hash(True)` and `1 == True`!
>
> ```python
> d = {1: "Integer One", True: "Boolean True"}
> print(d)  # {1: 'Boolean True'}
> ```

---

### Ways to Create Dictionaries

```python
# 1. Curly Braces Literal Syntax (Most common & fastest)
d1 = {"name": "Kala Chan", "age": 25, "address": "village"}

# 2. Empty Dictionary
empty_dict1 = {}
empty_dict2 = dict()

# 3. dict() Constructor with Keyword Arguments (keys must be valid identifiers)
d2 = dict(name="Sakib", age=30, city="Dhaka")
# Output: {'name': 'Sakib', 'age': 30, 'city': 'Dhaka'}

# 4. dict() Constructor with List of Tuples (Key-Value pairs)
pairs = [("id", 101), ("role", "Admin"), ("status", "Active")]
d3 = dict(pairs)
# Output: {'id': 101, 'role': 'Admin', 'status': 'Active'}

# 5. Using dict.fromkeys() (Initializes multiple keys with the same default value)
keys = ["a", "b", "c"]
d4 = dict.fromkeys(keys, 0)
# Output: {'a': 0, 'b': 0, 'c': 0}

# 6. Combining two lists using zip() and dict()
fields = ["name", "score", "grade"]
values = ["Tamim", 95, "A+"]
d5 = dict(zip(fields, values))
# Output: {'name': 'Tamim', 'score': 95, 'grade': 'A+'}
```

---

## 2. Accessing, Adding & Modifying Elements

### Accessing Values: Bracket `[]` vs. `.get()`

There are two primary ways to retrieve values by key:

```python
user = {"name": "Alice", "role": "Engineer"}

# 1. Bracket Notation: user[key]
print(user["name"])  # 'Alice'
# print(user["salary"]) # 💥 KeyError: 'salary'

# 2. get() Method: user.get(key, default=None)
print(user.get("name"))              # 'Alice'
print(user.get("salary"))            # None (No error!)
print(user.get("salary", 50000))     # 50000 (Custom default fallback)
```

| Feature            | `dict[key]`                       | `dict.get(key, default)`                  |
| :----------------- | :-------------------------------- | :---------------------------------------- |
| **Existing Key**   | Returns value                     | Returns value                             |
| **Missing Key**    | Raises `KeyError`                 | Returns `default` (or `None`)             |
| **Best Used When** | Key is strictly expected to exist | Key might be absent; safe fallback needed |

---

### Adding and Updating Entries

Dictionaries are **mutable**. You can add new keys or reassign existing ones at any time using assignment or methods:

```python
person = {"name": "kala chan", "address": "village"}

# 1. Adding a new key-value pair
person["salary"] = 10000
print(person)
# {'name': 'kala chan', 'address': 'village', 'salary': 10000}

# 2. Updating an existing key's value
person["address"] = "city"
person["salary"] = 15000
print(person)
# {'name': 'kala chan', 'address': 'city', 'salary': 15000}

# 3. Adding/Updating multiple entries at once using update()
person.update({"job": "Developer", "age": 25})
print(person)
# {'name': 'kala chan', 'address': 'city', 'salary': 15000, 'job': 'Developer', 'age': 25}
```

---

### Nested Dictionaries

Values inside dictionaries can be dictionaries themselves. This enables modeling hierarchical or JSON-like data:

```python
company = {
    "emp1": {
        "name": "Rahim",
        "skills": ["Python", "Django"],
        "details": {"experience": 3, "salary": 60000}
    },
    "emp2": {
        "name": "Karim",
        "skills": ["JavaScript", "React"],
        "details": {"experience": 2, "salary": 45000}
    }
}

# Accessing nested data: chain the square brackets [] or .get()
print(company["emp1"]["name"])                       # 'Rahim'
print(company["emp1"]["skills"][0])                  # 'Python'
print(company["emp1"]["details"]["salary"])          # 60000

# Safely accessing deeply nested keys with chained get()
exp = company.get("emp3", {}).get("details", {}).get("experience", "Not Found")
print(exp)  # 'Not Found'
```

---

## 3. Comprehensive Guide to All Built-in Dictionary Methods

Python provides **11 built-in dictionary methods**. Every single one is explained below with syntax, return values, Big-O time complexity, and practical examples:

```
┌────────────────────────────────────────────────────────────────────────┐
│                   Python Built-in Dictionary Methods                   │
├─────────────────┬──────────────────────┬───────────────────────────────┤
│ Access / Search │ Add / Update         │ Remove / Extract              │
├─────────────────┼──────────────────────┼───────────────────────────────┤
│ • get()         │ • setdefault()       │ • pop()                       │
│ • keys()        │ • update()           │ • popitem()                   │
│ • values()      │ • fromkeys()         │ • clear()                     │
│ • items()       │                      │                               │
├─────────────────┴──────────────────────┴───────────────────────────────┤
│ Copying                                                                │
│ • copy()                                                               │
└────────────────────────────────────────────────────────────────────────┘
```

---

### 1. `clear()`

Removes all key-value pairs from the dictionary in-place, leaving it completely empty.

- **Syntax:** `dict.clear()`
- **Parameters:** None
- **Return Value:** `None`
- **Time Complexity:** $O(n)$ where $n$ is the number of elements

```python
data = {"a": 1, "b": 2, "c": 3}
data.clear()
print(data)  # {}
print(len(data))  # 0
```

> [!TIP]
> `data.clear()` clears the existing dictionary object that other variables might reference. Assigning `data = {}` simply creates a brand-new empty dictionary and rebinds the variable `data`.
>
> ```python
> a = {"x": 10}
> b = a
> a.clear()  # Both 'a' and 'b' now point to {}
> print(b)   # {}
> ```

---

### 2. `copy()`

Returns a **shallow copy** of the dictionary.

- **Syntax:** `dict.copy()`
- **Parameters:** None
- **Return Value:** A new `dict` object with copied keys and values
- **Time Complexity:** $O(n)$

```python
original = {"name": "Asif", "scores": [90, 85]}
clone = original.copy()

# Modifying top-level primitive values in clone does NOT affect original
clone["name"] = "Tanvir"
print(original["name"])  # 'Asif' (Unchanged)

# WARNING: Shallow copy shares references to nested mutable objects!
clone["scores"].append(100)
print(original["scores"])  # [90, 85, 100] (Original was modified!)
```

> [!NOTE]
> If you have nested mutable objects (e.g., lists or sub-dictionaries) and want complete independence, use Python's `copy.deepcopy()`:
>
> ```python
> import copy
> deep_clone = copy.deepcopy(original)
> deep_clone["scores"].append(70)
> print(original["scores"])  # Remains [90, 85, 100]
> ```

---

### 3. `fromkeys()`

A class method that creates a new dictionary with keys from an iterable and values set to a specified default value.

- **Syntax:** `dict.fromkeys(iterable, value=None)`
- **Parameters:**
  - `iterable`: An iterable of keys (list, tuple, set, string, etc.).
  - `value` _(Optional)_: Value assigned to all keys. Defaults to `None`.
- **Return Value:** A new `dict`.
- **Time Complexity:** $O(n)$

```python
features = ["wifi", "pool", "gym", "parking"]

# Default value is None
hotel_a = dict.fromkeys(features)
print(hotel_a)
# {'wifi': None, 'pool': None, 'gym': None, 'parking': None}

# Providing a specific initial value
hotel_b = dict.fromkeys(features, False)
print(hotel_b)
# {'wifi': False, 'pool': False, 'gym': False, 'parking': False}
```

> [!WARNING]
> **The Mutable Default Value Trap in `fromkeys()`:**
> If you pass a mutable object (like a list or dict) as the default value, **every key shares the exact same object reference**!
>
> ```python
> # ❌ DANGEROUS:
> bad_dict = dict.fromkeys(["a", "b", "c"], [])
> bad_dict["a"].append(99)
> print(bad_dict)  # {'a': [99], 'b': [99], 'c': [99]} -> ALL keys changed!
>
> # ✅ SAFE ALTERNATIVE (Use a dictionary comprehension):
> safe_dict = {key: [] for key in ["a", "b", "c"]}
> safe_dict["a"].append(99)
> print(safe_dict) # {'a': [99], 'b': [], 'c': []}
> ```

---

### 4. `get()`

Safely retrieves the value for a given key without raising a `KeyError` if the key does not exist.

- **Syntax:** `dict.get(key, default=None)`
- **Parameters:**
  - `key`: Key to search for.
  - `default` _(Optional)_: Value returned if the key is not found. Defaults to `None`.
- **Return Value:** Value associated with `key`, or `default`.
- **Time Complexity:** Average $O(1)$

```python
student = {"name": "Nabil", "roll": 105}

print(student.get("name"))              # 'Nabil'
print(student.get("grade"))             # None
print(student.get("grade", "Not graded yet"))  # 'Not graded yet'

# Note: get() does NOT insert the key into the dictionary
print(student)  # {'name': 'Nabil', 'roll': 105}
```

---

### 5. `items()`

Returns a dynamic **view object** displaying a list of `(key, value)` tuple pairs.

- **Syntax:** `dict.items()`
- **Parameters:** None
- **Return Value:** A `dict_items` view object.
- **Time Complexity:** $O(1)$

```python
user = {"name": "Habib", "age": 28, "city": "Sylhet"}

items_view = user.items()
print(items_view)
# dict_items([('name', 'Habib'), ('age', 28), ('city', 'Sylhet')])

# Unpacking key and value in a for loop:
for key, value in user.items():
    print(f"{key} -> {value}")
# Output:
# name -> Habib
# age -> 28
# city -> Sylhet
```

---

### 6. `keys()`

Returns a dynamic **view object** displaying all keys present in the dictionary.

- **Syntax:** `dict.keys()`
- **Parameters:** None
- **Return Value:** A `dict_keys` view object.
- **Time Complexity:** $O(1)$

```python
inventory = {"apples": 50, "bananas": 100, "oranges": 75}

all_keys = inventory.keys()
print(all_keys)  # dict_keys(['apples', 'bananas', 'oranges'])

# Converting to a list:
keys_list = list(inventory.keys())
print(keys_list)  # ['apples', 'bananas', 'oranges']
```

---

### 7. `values()`

Returns a dynamic **view object** displaying all values stored in the dictionary.

- **Syntax:** `dict.values()`
- **Parameters:** None
- **Return Value:** A `dict_values` view object.
- **Time Complexity:** $O(1)$

```python
marks = {"math": 90, "english": 85, "physics": 92}

all_values = marks.values()
print(all_values)  # dict_values([90, 85, 92])

# Perform calculations on values:
print(sum(marks.values()))              # 267
print(sum(marks.values()) / len(marks)) # 89.0 (Average)
```

---

### 8. `pop()`

Removes the specified key and returns its associated value. If the key is not found, it returns the provided default value; if no default is provided, it raises a `KeyError`.

- **Syntax:** `dict.pop(key[, default])`
- **Parameters:**
  - `key`: Key to remove.
  - `default` _(Optional)_: Value to return if key is not found.
- **Return Value:** The removed value.
- **Time Complexity:** Average $O(1)$

```python
config = {"theme": "dark", "zoom": 120, "autosave": True}

# Removing an existing key
removed_val = config.pop("zoom")
print(removed_val)  # 120
print(config)       # {'theme': 'dark', 'autosave': True}

# Safely removing a missing key with a default
missing_val = config.pop("font_size", 14)
print(missing_val)  # 14

# Missing key WITHOUT default raises KeyError:
# config.pop("font_size")  # 💥 KeyError: 'font_size'
```

---

### 9. `popitem()`

Removes and returns the **last inserted** `(key, value)` pair from the dictionary (LIFO - Last In, First Out order).

- **Syntax:** `dict.popitem()`
- **Parameters:** None
- **Return Value:** A 2-tuple `(key, value)`.
- **Time Complexity:** $O(1)$
- **Raises:** `KeyError` if the dictionary is empty.

```python
stack = {"first": 1, "second": 2, "third": 3}

last_item = stack.popitem()
print(last_item)  # ('third', 3)
print(stack)      # {'first': 1, 'second': 2}

# Popping from an empty dict:
empty = {}
# empty.popitem() # 💥 KeyError: 'popitem(): dictionary is empty'
```

---

### 10. `setdefault()`

Returns the value of a key if it exists. If it does not exist, it **inserts the key with the specified default value** and returns that value.

- **Syntax:** `dict.setdefault(key, default=None)`
- **Parameters:**
  - `key`: The key to search or insert.
  - `default` _(Optional)_: Value to insert if key is missing. Defaults to `None`.
- **Return Value:** The value of the key (existing or newly set).
- **Time Complexity:** Average $O(1)$

```python
profile = {"username": "kawsar", "country": "Bangladesh"}

# 1. Key exists: returns existing value without changing anything
c = profile.setdefault("country", "Unknown")
print(c)        # 'Bangladesh'
print(profile)  # Remains unchanged

# 2. Key does NOT exist: inserts new key-value pair and returns default
role = profile.setdefault("role", "Student")
print(role)     # 'Student'
print(profile)  # {'username': 'kawsar', 'country': 'Bangladesh', 'role': 'Student'}
```

> [!TIP]
> `setdefault()` is extremely helpful for grouping items into lists without checking `if key not in d:`:
>
> ```python
> words = ["apple", "bat", "ant", "ball", "cat"]
> grouped = {}
> for w in words:
>     grouped.setdefault(w[0], []).append(w)
> print(grouped)
> # {'a': ['apple', 'ant'], 'b': ['bat', 'ball'], 'c': ['cat']}
> ```

---

### 11. `update()`

Updates the dictionary with elements from another dictionary object or from an iterable of key-value pairs. Existing keys are updated; new keys are added.

- **Syntax:** `dict.update([other])`
- **Parameters:** Another `dict`, an iterable of pairs, or keyword arguments.
- **Return Value:** `None` (modifies in-place)
- **Time Complexity:** $O(m)$ where $m$ is the size of the incoming data

```python
base_info = {"name": "Kala Chan", "age": 25}

# 1. Update using another dictionary
more_info = {"age": 26, "city": "Sylhet"}
base_info.update(more_info)
print(base_info)  # {'name': 'Kala Chan', 'age': 26, 'city': 'Sylhet'}

# 2. Update using keyword arguments
base_info.update(job="Engineer", country="BD")
print(base_info)
# {'name': 'Kala Chan', 'age': 26, 'city': 'Sylhet', 'job': 'Engineer', 'country': 'BD'}

# 3. Update using list of tuples (key-value pairs)
base_info.update([("salary", 35000), ("status", "Full-Time")])
print(base_info["salary"])  # 35000
```

---

## 4. Dictionary Views & Set Operations

### Dynamic Nature of Dictionary Views

The methods `.keys()`, `.values()`, and `.items()` return **view objects** (`dict_keys`, `dict_values`, `dict_items`). They do **not** create a static copy of the data—they provide a live window into the dictionary!

```python
stock = {"pens": 10, "books": 5}

keys_view = stock.keys()
print(keys_view)  # dict_keys(['pens', 'books'])

# Modify the original dictionary
stock["notebooks"] = 20

# The view reflects the change automatically!
print(keys_view)  # dict_keys(['pens', 'books', 'notebooks'])
```

---

### Set-like Operations on Keys and Items

`dict_keys` and `dict_items` view objects support **set mathematical operations** directly without needing to be converted with `set()`:

```python
dict_a = {"apple": 1, "banana": 2, "orange": 3}
dict_b = {"banana": 5, "orange": 6, "grape": 7}

# 1. Intersection (&) -> Keys present in BOTH dicts
common_keys = dict_a.keys() & dict_b.keys()
print(common_keys)  # {'banana', 'orange'}

# 2. Union (|) -> All unique keys combined
all_keys = dict_a.keys() | dict_b.keys()
print(all_keys)  # {'apple', 'banana', 'orange', 'grape'}

# 3. Difference (-) -> Keys in dict_a but NOT in dict_b
only_in_a = dict_a.keys() - dict_b.keys()
print(only_in_a)  # {'apple'}

# 4. Symmetric Difference (^) -> Keys in either, but NOT in both
unique_to_each = dict_a.keys() ^ dict_b.keys()
print(unique_to_each)  # {'apple', 'grape'}
```

---

## 5. Iterating Over Dictionaries

### Looping Over Keys, Values, and Items

```python
person1 = {"name": "kala chan", "address": "village", "age": 25, "job": "thikana nai"}

# 1. Iterating over keys directly (Default behavior)
for key in person1:
    print(key, end=" ")
# name address age job
print()

# Explicitly using .keys():
for key in person1.keys():
    print(key, end=" ")
print()

# 2. Iterating over values only (.values())
for val in person1.values():
    print(val, end=" | ")
# kala chan | village | 25 | thikana nai |
print()

# 3. Iterating over key-value pairs (.items()) - Most idiomatic!
for key, value in person1.items():
    print(f"Key: {key:<10} => Value: {value}")
# Key: name       => Value: kala chan
# Key: address    => Value: village
# Key: age        => Value: 25
# Key: job        => Value: thikana nai
```

---

### Using `enumerate()` with Dictionaries

`enumerate()` produces an index counter along with items:

```python
person1 = {"name": "kala chan", "address": "village", "age": 25, "job": "thikana nai"}

# 1. Enumerate on keys:
for idx, key in enumerate(person1):
    print(f"#{idx}: {key} -> {person1[key]}")

# 2. Enumerate on (key, value) items:
for idx, (key, value) in enumerate(person1.items(), start=1):
    print(f"Item {idx}: {key} = {value}")
# Item 1: name = kala chan
# Item 2: address = village
# Item 3: age = 25
# Item 4: job = thikana nai
```

---

### Modifying a Dictionary During Iteration (Gotcha & Fix)

> [!CAUTION]
> You **cannot** add or delete keys in a dictionary while iterating over it directly. Python will raise a `RuntimeError`:
>
> ```python
> prices = {"pen": 5, "eraser": 2, "bag": 50}
> for item in prices:
>     if prices[item] < 10:
>         del prices[item]  # 💥 RuntimeError: dictionary changed size during iteration
> ```

#### The Solutions:

```python
prices = {"pen": 5, "eraser": 2, "bag": 50}

# Solution 1: Iterate over a static list copy of the keys
for item in list(prices.keys()):
    if prices[item] < 10:
        del prices[item]
print(prices)  # {'bag': 50}

# Solution 2: Use dictionary comprehension to filter
prices = {"pen": 5, "eraser": 2, "bag": 50}
prices = {k: v for k, v in prices.items() if v >= 10}
print(prices)  # {'bag': 50}
```

---

## 6. Modern Dictionary Operators (Python 3.9+)

### Merge Operator (`|`)

Introduced in **Python 3.9**, creates a **new** dictionary containing keys and values from both operands. If keys overlap, the right-hand operand's value wins.

```python
default_settings = {"theme": "light", "notifications": True, "volume": 50}
user_settings    = {"theme": "dark", "volume": 80}

merged = default_settings | user_settings
print(merged)
# {'theme': 'dark', 'notifications': True, 'volume': 80}
```

---

### Update Operator (`|=`)

Modifies the left-hand dictionary **in-place** with elements from the right-hand dictionary (equivalent to `.update()`):

```python
settings = {"volume": 50, "brightness": 70}
settings |= {"volume": 80, "contrast": 90}
print(settings)
# {'volume': 80, 'brightness': 70, 'contrast': 90}
```

---

### Dictionary Unpacking (`**`)

The double-star `**` operator unpacks dictionary key-value pairs:

```python
dict_a = {"a": 1, "b": 2}
dict_b = {"b": 99, "c": 3}

# Merging dictionaries using unpacking (works in Python 3.5+)
combined = {**dict_a, **dict_b, "d": 4}
print(combined)  # {'a': 1, 'b': 99, 'c': 3, 'd': 4}

# Passing dictionary entries as keyword arguments to a function:
def greet(name, role, age):
    return f"{name} is a {role} of age {age}."

profile = {"name": "Farhan", "role": "Doctor", "age": 30}
print(greet(**profile))
# 'Farhan is a Doctor of age 30.'
```

---

### Membership Operators (`in`, `not in`)

Checks whether a **key** exists in the dictionary. Executes in **$O(1)$ constant time**!

```python
student = {"name": "Zubair", "score": 88}

# Checks KEYS (not values!)
print("name" in student)      # True
print("address" in student)   # False
print("score" not in student) # False

# To check if a VALUE exists, explicitly check in student.values() (O(n) time):
print(88 in student.values())       # True
print("Zubair" in student.values()) # True
```

---

## 7. Global Built-in Functions Used with Dictionaries

Python provides several global built-in functions that work seamlessly with dictionaries:

### Aggregation Functions

```python
scores = {"math": 85, "science": 92, "english": 78}

# len(): Returns the number of key-value pairs
print(len(scores))  # 3

# min() and max() by default operate on KEYS
print(min(scores))  # 'english' (alphabetical order)
print(max(scores))  # 'science'

# To find min/max based on VALUES, supply key=scores.get:
highest_subject = max(scores, key=scores.get)
print(f"Highest: {highest_subject} ({scores[highest_subject]})") # Highest: science (92)

lowest_subject = min(scores, key=scores.get)
print(f"Lowest: {lowest_subject} ({scores[lowest_subject]})")   # Lowest: english (78)

# sum(): operate on dict.values()
total_score = sum(scores.values())
print(total_score)  # 255
```

---

### Ordering Functions

```python
data = {"c": 30, "a": 10, "b": 20}

# sorted(): Returns a sorted list of KEYS
print(sorted(data))  # ['a', 'b', 'c']

# Sort by VALUES and return list of (key, value) tuples:
sorted_by_val = sorted(data.items(), key=lambda item: item[1])
print(sorted_by_val)  # [('a', 10), ('b', 20), ('c', 30)]

# Sort in descending order and rebuild a sorted dict:
sorted_desc_dict = dict(sorted(data.items(), key=lambda item: item[1], reverse=True))
print(sorted_desc_dict)  # {'c': 30, 'b': 20, 'a': 10}

# reversed(): Reverses insertion order
for k in reversed(data):
    print(k, end=" ")  # b a c
print()
```

---

### Boolean Evaluation

```python
# any(): True if at least one key is truthy
print(any({0: "zero", False: "no"}))  # False (0 and False are falsy keys)
print(any({0: "zero", 1: "one"}))     # True (1 is truthy)

# all(): True if ALL keys are truthy
print(all({1: "a", 2: "b"}))          # True
print(all({0: "a", 1: "b"}))          # False (0 is falsy)
```

---

### `zip()` for Dictionary Construction

Pairs elements from two iterables into key-value pairs:

```python
countries = ["BD", "US", "UK", "JP"]
capitals  = ["Dhaka", "Washington D.C.", "London", "Tokyo"]

country_map = dict(zip(countries, capitals))
print(country_map)
# {'BD': 'Dhaka', 'US': 'Washington D.C.', 'UK': 'London', 'JP': 'Tokyo'}
```

---

## 8. Dictionary Comprehensions

Dictionary comprehensions provide an elegant, compact syntax for creating new dictionaries from iterables.

**Basic Syntax:**

```python
{key_expression: value_expression for item in iterable if condition}
```

### Basic Syntax & Filtering

```python
# 1. Square numbers from 1 to 5
squares = {x: x**2 for x in range(1, 6)}
print(squares)  # {1: 1, 2: 4, 3: 9, 4: 16, 5: 25}

# 2. Filtering with if condition (Only even numbers)
even_squares = {x: x**2 for x in range(1, 11) if x % 2 == 0}
print(even_squares)  # {2: 4, 4: 16, 6: 36, 8: 64, 10: 100}

# 3. Categorizing data with if-else in value expression
marks = {"Tamim": 45, "Sakib": 82, "Mushfiq": 65, "Mahmudullah": 38}
results = {name: ("Pass" if score >= 40 else "Fail") for name, score in marks.items()}
print(results)
# {'Tamim': 'Pass', 'Sakib': 'Pass', 'Mushfiq': 'Pass', 'Mahmudullah': 'Fail'}
```

---

### Inverting Keys and Values

Swap keys and values easily (requires all values to be unique and hashable):

```python
code_to_country = {880: "Bangladesh", 1: "USA", 44: "UK"}
country_to_code = {country: code for code, country in code_to_country.items()}
print(country_to_code)
# {'Bangladesh': 880, 'USA': 1, 'UK': 44}
```

---

### Nested Comprehensions

```python
# Multiplication table (2 to 4) up to 3 multiples
mult_table = {i: {j: i * j for j in range(1, 4)} for i in range(2, 5)}
print(mult_table)
# {
#   2: {1: 2, 2: 4, 3: 6},
#   3: {1: 3, 2: 6, 3: 9},
#   4: {1: 4, 2: 8, 3: 12}
# }
```

---

## 9. Advanced Standard Library Types (`collections`)

Python's built-in `collections` module provides powerful extensions for specialized dictionary tasks:

### `collections.defaultdict`

Automatically provides a default value for non-existent keys without raising a `KeyError`.

```python
from collections import defaultdict

# 1. Default integer count (defaults to 0)
num_counts = defaultdict(int)
numbers = [12, 56, 65, 43, 33, 33, 33, 22, 33, 33, 44, 44, 55, 55, 12, 12, 12]
for n in numbers:
    num_counts[n] += 1
print(dict(num_counts))
# {12: 4, 56: 1, 65: 1, 43: 1, 33: 5, 22: 1, 44: 2, 55: 2}

# 2. Default list collector (defaults to [])
groups = defaultdict(list)
students = [("CS", "Arefin"), ("BBA", "Sabbir"), ("CS", "Nadia")]
for dept, name in students:
    groups[dept].append(name)
print(dict(groups))
# {'CS': ['Arefin', 'Nadia'], 'BBA': ['Sabbir']}
```

---

### `collections.Counter`

A specialized dictionary subclass designed specifically for counting frequency of hashable elements:

```python
from collections import Counter

numbers = [12, 56, 65, 43, 33, 33, 33, 22, 33, 33, 44, 44, 55, 55, 12, 12, 12]
counts = Counter(numbers)

print(counts)
# Counter({33: 5, 12: 4, 44: 2, 55: 2, 56: 1, 65: 1, 43: 1, 22: 1})

# Most common 2 elements:
print(counts.most_common(2))  # [(33, 5), (12, 4)]
```

---

### `collections.OrderedDict`

Before Python 3.7, standard dictionaries did not guarantee order, so `OrderedDict` was essential. Today, standard `dict` maintains order, but `OrderedDict` is still valuable for order-sensitive operations:

- `move_to_end(key, last=True)`: Moves a key to either end (crucial for building LRU Caches!).
- Equality check in `OrderedDict` compares **both** content AND insertion order.

```python
from collections import OrderedDict

od = OrderedDict()
od["first"] = 1
od["second"] = 2
od["third"] = 3

od.move_to_end("first")  # moves 'first' to the end
print(list(od.keys()))   # ['second', 'third', 'first']
```

---

### `types.MappingProxyType` (Read-Only Dictionaries)

When you need to expose a dictionary that cannot be modified (immutable view):

```python
from types import MappingProxyType

writable_dict = {"status": "OPEN", "max_connections": 100}
read_only = MappingProxyType(writable_dict)

print(read_only["status"])  # 'OPEN'

# Attempting modification raises an error:
# read_only["status"] = "CLOSED"  # 💥 TypeError: 'mappingproxy' object does not support item assignment

# If the underlying dict changes, the proxy reflects it:
writable_dict["status"] = "MAINTENANCE"
print(read_only["status"])  # 'MAINTENANCE'
```

---

## 10. Master Quick-Reference Cheat Sheet & Big-O Complexity

### All 11 Built-in Methods

| Method             | Syntax                     | Description                                   | Returns            | Time Complexity |
| :----------------- | :------------------------- | :-------------------------------------------- | :----------------- | :-------------: |
| **`clear()`**      | `d.clear()`                | Removes all elements from the dictionary      | `None`             |     $O(n)$      |
| **`copy()`**       | `d.copy()`                 | Returns a shallow copy of the dictionary      | `dict`             |     $O(n)$      |
| **`fromkeys()`**   | `dict.fromkeys(iter, val)` | Creates a new dict with keys from iterable    | `dict`             |     $O(n)$      |
| **`get()`**        | `d.get(k, default)`        | Returns value of key; fallback if missing     | `val` or `default` |     $O(1)$      |
| **`items()`**      | `d.items()`                | Returns dynamic view of `(key, value)` pairs  | `dict_items`       |     $O(1)$      |
| **`keys()`**       | `d.keys()`                 | Returns dynamic view of all keys              | `dict_keys`        |     $O(1)$      |
| **`pop()`**        | `d.pop(k, default)`        | Removes key and returns its value             | Value of `k`       |     $O(1)$      |
| **`popitem()`**    | `d.popitem()`              | Removes & returns last inserted `(k, v)` pair | `(key, value)`     |     $O(1)$      |
| **`setdefault()`** | `d.setdefault(k, def)`     | Gets value of `k`; inserts `def` if absent    | Current/new value  |     $O(1)$      |
| **`update()`**     | `d.update(other)`          | Updates dict with key-values from `other`     | `None`             |     $O(m)$      |
| **`values()`**     | `d.values()`               | Returns dynamic view of all values            | `dict_values`      |     $O(1)$      |

---

### Common Operations & Operator Complexity

| Operation            | Code / Syntax       | Average Complexity |        Worst Case         |
| :------------------- | :------------------ | :----------------: | :-----------------------: |
| **Index Access**     | `d[key]`            |       $O(1)$       | $O(n)$ _(hash collision)_ |
| **Key Assignment**   | `d[key] = val`      |       $O(1)$       |  $O(n)$ _(table resize)_  |
| **Key Deletion**     | `del d[key]`        |       $O(1)$       |          $O(n)$           |
| **Key Membership**   | `key in d`          |       $O(1)$       |          $O(n)$           |
| **Value Membership** | `val in d.values()` |       $O(n)$       |          $O(n)$           |
| **Length Check**     | `len(d)`            |       $O(1)$       |          $O(1)$           |
| **Dictionary Merge** | `d1 \| d2`          |     $O(n + m)$     |        $O(n + m)$         |
| **Iteration**        | `for k in d:`       |       $O(n)$       |          $O(n)$           |

---

## 11. Common Gotchas & Best Practices

### 1. Avoid `KeyError` when accessing keys

```python
# ❌ Risky (Crashes if key doesn't exist):
value = person["phone"]

# ✅ Safe Option A: Use .get()
phone = person.get("phone", "N/A")

# ✅ Safe Option B: Membership check first
if "phone" in person:
    phone = person["phone"]

# ✅ Safe Option C: Exception handling
try:
    phone = person["phone"]
except KeyError:
    phone = "N/A"
```

---

### 2. Never use mutable objects as keys

```python
# ❌ Lists cannot be keys
# d = {[1, 2]: "numbers"}  # TypeError: unhashable type: 'list'

# ✅ Use an immutable tuple instead:
d = {(1, 2): "numbers"}
```

---

### 3. Beware of `dict.fromkeys()` with mutable values

```python
# ❌ Trap: Every key references the SAME list!
d = dict.fromkeys(["p1", "p2"], [])
d["p1"].append("item")
print(d)  # {'p1': ['item'], 'p2': ['item']}

# ✅ Proper Way: Use dictionary comprehension
d = {k: [] for k in ["p1", "p2"]}
d["p1"].append("item")
print(d)  # {'p1': ['item'], 'p2': []}
```

---

### 4. Modifying dictionary size during iteration

```python
# ❌ Error: RuntimeError: dictionary changed size during iteration
# for k in d:
#     if condition: del d[k]

# ✅ Solution: Iterate over a list copy of keys
for k in list(d.keys()):
    if d[k] == 0:
        del d[k]
```

---

### 5. `dict.setdefault()` vs. `defaultdict`

- Use `dict.setdefault(key, val)` when you only need a default in **one or two specific places**.
- Use `collections.defaultdict` when you are constantly appending or incrementing across a large loop or function.

---

### 6. Merging Dictionaries: Which syntax to choose?

- **Python 3.9+:** Use `d1 | d2` (cleanest, most readable for producing a new dictionary).
- **Python 3.5 - 3.8:** Use `{**d1, **d2}`.
- **In-place mutation:** Use `d1.update(d2)` or `d1 |= d2`.

---

_Authored for Python 3.9+ | Structured for fast revision and long-term reference._
