# 📘 Python Strings & Built-in String Methods: Comprehensive Reference Guide

> A complete, beginner-to-advanced guide covering Python string fundamentals, all built-in methods, global built-in functions, modern formatting (f-strings), edge cases, and performance tips with practical code examples.

---

## 📑 Table of Contents

1. [String Fundamentals & Core Concepts](#1-string-fundamentals--core-concepts)
   - [What is a String?](#what-is-a-string)
   - [String Immutability](#string-immutability)
   - [Declaring Strings & Quotes](#declaring-strings--quotes)
   - [Escape Sequences & Raw Strings](#escape-sequences--raw-strings)
   - [Indexing & Slicing](#indexing--slicing)
   - [String Operators](#string-operators)
2. [Categorized Built-in String Methods](#2-categorized-built-in-string-methods)
   - [Case Conversion Methods](#case-conversion-methods)
   - [Search & Inspection Methods](#search--inspection-methods)
   - [Boolean Validation Methods (`is...`)](#boolean-validation-methods-is)
   - [Trimming & Whitespace Handling](#trimming--whitespace-handling)
   - [Alignment & Padding Methods](#alignment--padding-methods)
   - [Splitting, Partitioning & Joining](#splitting-partitioning--joining)
   - [Replacement & Prefix/Suffix Removal](#replacement--prefixsuffix-removal)
   - [Translation & Character Mapping](#translation--character-mapping)
   - [Formatting & Tab Expansion](#formatting--tab-expansion)
   - [Encoding & Decoding](#encoding--decoding)
3. [Global Built-in Functions Used with Strings](#3-global-built-in-functions-used-with-strings)
4. [String Formatting Styles (f-strings, `.format()`, `%`)](#4-string-formatting-styles)
5. [Master Quick-Reference Cheat Sheet](#5-master-quick-reference-cheat-sheet)
6. [Best Practices & Common Gotchas](#6-best-practices--common-gotchas)

---

## 1. String Fundamentals & Core Concepts

### What is a String?

In Python, a string is an ordered, immutable sequence of Unicode characters (`str` data type). Every character inside a string corresponds to an integer Unicode code point.

```python
text = "Python Programming"
print(type(text))  # <class 'str'>
```

---

### String Immutability

**Strings cannot be modified in-place.** Any method or operation that appears to modify a string actually creates and returns a **new string object** in memory.

```python
s = "hello"

# Trying to mutate raises a TypeError:
# s[0] = "H"  # ❌ TypeError: 'str' object does not support item assignment

# Correct way: Re-assignment to a new string
s = "H" + s[1:]
print(s)  # "Hello"
```

---

### Declaring Strings & Quotes

```python
# 1. Single Quotes
s1 = 'Hello World'

# 2. Double Quotes (ideal when string contains single quotes)
s2 = "Rakib's laptop"

# 3. Triple Quotes (multi-line strings & docstrings)
s3 = """Line 1: Hello
Line 2: World
Line 3: Python"""

# 4. Empty Strings
empty_1 = ""
empty_2 = str()
```

---

### Escape Sequences & Raw Strings

Escape sequences use the backslash `\` to escape special characters.

| Escape Sequence | Description        | Example                |
| :-------------- | :----------------- | :--------------------- |
| `\'`            | Single quote       | `'It\'s ok'`           |
| `\"`            | Double quote       | `"He said \"Hi\""`     |
| `\\`            | Backslash          | `"C:\\Users\\Admin"`   |
| `\n`            | Newline            | `"Line 1\nLine 2"`     |
| `\t`            | Horizontal Tab     | `"Item\tPrice"`        |
| `\r`            | Carriage Return    | `"Hello\rWorld"`       |
| `\b`            | Backspace          | `"Hello \bWorld"`      |
| `\uXXXX`        | 16-bit hex Unicode | `"\u03A9"` -> $\Omega$ |

#### Raw Strings (`r""` or `R""`)

Prefixing a string with `r` disables escape sequences. Useful for regular expressions and Windows file paths:

```python
# Regular string treats \n as newline, \t as tab:
normal_path = "C:\new_folder\test"

# Raw string preserves backslashes as literal characters:
raw_path = r"C:\new_folder\test"
print(raw_path)  # C:\new_folder\test
```

---

### Indexing & Slicing

Strings are 0-indexed from left to right, and `-1`-indexed from right to left:

```text
 String:   P   Y   T   H   O   N
+ Index:   0   1   2   3   4   5
- Index:  -6  -5  -4  -3  -2  -1
```

```python
s = "PYTHON"

# Positive indexing
print(s[0])   # 'P'
print(s[2])   # 'T'

# Negative indexing
print(s[-1])  # 'N' (last character)
print(s[-3])  # 'H'
```

#### Slicing Syntax: `string[start:stop:step]`

- `start`: Inclusive starting index (defaults to `0` if step > 0)
- `stop`: Exclusive ending index (defaults to `len(string)` if step > 0)
- `step`: Stride / direction (defaults to `1`)

```python
text = "Python Programming"

# Basic slicing
print(text[0:6])     # 'Python'
print(text[:6])      # 'Python' (omitted start defaults to 0)
print(text[7:])      # 'Programming' (omitted stop goes to end)

# Slicing with step
print(text[::2])     # 'Pto rgamn' (every 2nd character)

# Reversing a string with negative step
print(text[::-1])    # 'gnimmargorP nohtyP'

# Negative indices in slicing
print(text[-11:-1])  # 'Programmin'
```

---

### String Operators

```python
a = "Hello"
b = "World"

# 1. Concatenation (+)
print(a + " " + b)    # 'Hello World'

# 2. Repetition (*)
print("-" * 10)       # '----------'
print("Ha" * 3)       # 'HaHaHa'

# 3. Membership (`in` and `not in`)
print("ell" in a)     # True
print("z" in a)       # False
print("z" not in a)   # True

# 4. Comparison (Lexicographical / ASCII value order)
print("apple" < "banana")  # True ('a' comes before 'b')
print("Apple" < "apple")   # True (ASCII 65 < 97)
```

---

## 2. Categorized Built-in String Methods

All string methods return a **new string, integer, boolean, or list** without modifying the original string.

---

### Case Conversion Methods

| Method         | Syntax           | Returns | Description                                                                      |
| :------------- | :--------------- | :------ | :------------------------------------------------------------------------------- |
| `lower()`      | `s.lower()`      | `str`   | Converts all characters to lowercase.                                            |
| `upper()`      | `s.upper()`      | `str`   | Converts all characters to uppercase.                                            |
| `capitalize()` | `s.capitalize()` | `str`   | Capitalizes 1st character; lowercases all others.                                |
| `title()`      | `s.title()`      | `str`   | Capitalizes the 1st letter of each word.                                         |
| `swapcase()`   | `s.swapcase()`   | `str`   | Inverts case: uppercase becomes lowercase & vice versa.                          |
| `casefold()`   | `s.casefold()`   | `str`   | Aggressive lowercase conversion for caseless matching (e.g. German 'ß' -> 'ss'). |

#### Code Examples:

```python
text = "hELLo wORlD! ß"

print(text.lower())       # 'hello world! ß'
print(text.upper())       # 'HELLO WORLD! SS'
print(text.capitalize())  # 'Hello world! ß'
print(text.title())       # 'Hello World! Ss'
print(text.swapcase())    # 'HellO WorLd! SS'

# casefold vs lower:
german_word = "straße"
print(german_word.lower())     # 'straße'
print(german_word.casefold())  # 'strasse'
print("STRASSE".casefold() == german_word.casefold())  # True (perfect for case-insensitive matching)
```

---

### Search & Inspection Methods

| Method         | Syntax                                 | Returns | Description                                               |
| :------------- | :------------------------------------- | :------ | :-------------------------------------------------------- |
| `count()`      | `s.count(sub[, start[, end]])`         | `int`   | Counts non-overlapping occurrences of `sub`.              |
| `find()`       | `s.find(sub[, start[, end]])`          | `int`   | Lowest index of `sub`. Returns `-1` if not found.         |
| `rfind()`      | `s.rfind(sub[, start[, end]])`         | `int`   | Highest index of `sub`. Returns `-1` if not found.        |
| `index()`      | `s.index(sub[, start[, end]])`         | `int`   | Lowest index of `sub`. Raises `ValueError` if not found.  |
| `rindex()`     | `s.rindex(sub[, start[, end]])`        | `int`   | Highest index of `sub`. Raises `ValueError` if not found. |
| `startswith()` | `s.startswith(prefix[, start[, end]])` | `bool`  | `True` if string starts with `prefix` (can be a tuple).   |
| `endswith()`   | `s.endswith(suffix[, start[, end]])`   | `bool`  | `True` if string ends with `suffix` (can be a tuple).     |

#### Code Examples:

```python
sentence = "apple banana apple cherry apple"

# count
print(sentence.count("apple"))        # 3
print(sentence.count("apple", 0, 15)) # 2 (within range)

# find vs index
print(sentence.find("banana"))        # 6
print(sentence.find("mango"))         # -1 (safe, does not throw error)

print(sentence.index("banana"))       # 6
# print(sentence.index("mango"))      # ❌ Raises ValueError: substring not found

# rfind and rindex (from the right)
print(sentence.rfind("apple"))        # 26 (last occurrence)
print(sentence.rindex("apple"))       # 26

# startswith and endswith
filename = "report_2026.pdf"
print(filename.startswith("report"))              # True
print(filename.endswith(".pdf"))                 # True
print(filename.endswith((".pdf", ".doc", ".txt"))) # True (accepts a tuple of options!)
```

---

### Boolean Validation Methods (`is...`)

These methods check whether the string satisfies a specific condition and return `True` or `False`. They return `False` on empty strings.

| Method           | Returns `True` if:                                                             | Example                             |
| :--------------- | :----------------------------------------------------------------------------- | :---------------------------------- |
| `isalnum()`      | All characters are alphanumeric (letters or numbers).                          | `"abc123".isalnum()` -> `True`      |
| `isalpha()`      | All characters are alphabetic (letters only).                                  | `"abc".isalpha()` -> `True`         |
| `isascii()`      | All characters are ASCII (code points $\le 127$).                              | `"hello".isascii()` -> `True`       |
| `isdecimal()`    | All characters are decimal digits (base 10: 0-9).                              | `"123".isdecimal()` -> `True`       |
| `isdigit()`      | All characters are digits (includes superscripts, subscripts).                 | `"123".isdigit()` -> `True`         |
| `isnumeric()`    | All characters are numeric (includes fractions, Roman numerals, Roman digits). | `"¼".isnumeric()` -> `True`         |
| `isidentifier()` | String is a valid Python identifier/variable name.                             | `"var_1".isidentifier()` -> `True`  |
| `islower()`      | All cased characters are lowercase.                                            | `"hello world".islower()` -> `True` |
| `isupper()`      | All cased characters are uppercase.                                            | `"HELLO".isupper()` -> `True`       |
| `istitle()`      | String is titlecased (words start with capital letter).                        | `"Hello World".istitle()` -> `True` |
| `isprintable()`  | All characters are printable (no `\n`, `\t`, etc.).                            | `"Hello".isprintable()` -> `True`   |
| `isspace()`      | All characters are whitespace (` `, `\t`, `\n`, `\r`, `\v`, `\f`).             | `"   \t\n".isspace()` -> `True`     |

#### Understanding the Difference: `isdecimal()` vs `isdigit()` vs `isnumeric()`

```python
num_str = "123"      # Standard digit
sup_str = "²"        # Superscript two
frac_str = "½"       # Fraction

print("--- isdecimal() ---")
print(num_str.isdecimal())   # True
print(sup_str.isdecimal())   # False
print(frac_str.isdecimal())  # False

print("--- isdigit() ---")
print(num_str.isdigit())     # True
print(sup_str.isdigit())     # True
print(frac_str.isdigit())    # False

print("--- isnumeric() ---")
print(num_str.isnumeric())   # True
print(sup_str.isnumeric())   # True
print(frac_str.isnumeric())  # True
```

#### Identifier & Printable Examples:

```python
print("user_name".isidentifier())  # True
print("2user".isidentifier())      # False (cannot start with a digit)
print("def".isidentifier())        # True (valid identifier form, even if keyword)

print("Hello\nWorld".isprintable()) # False (due to newline \n)
print("Hello World".isprintable())  # True
```

---

### Trimming & Whitespace Handling

| Method     | Syntax              | Description                                                   |
| :--------- | :------------------ | :------------------------------------------------------------ |
| `strip()`  | `s.strip([chars])`  | Removes leading & trailing whitespace (or specified `chars`). |
| `lstrip()` | `s.lstrip([chars])` | Removes only leading (left) whitespace (or `chars`).          |
| `rstrip()` | `s.rstrip([chars])` | Removes only trailing (right) whitespace (or `chars`).        |

#### Code Examples:

```python
msg = "   Hello Python!   \n"

print(repr(msg.strip()))   # 'Hello Python!'
print(repr(msg.lstrip()))  # 'Hello Python!   \n'
print(repr(msg.rstrip()))  # '   Hello Python!'

# Stripping custom characters (strips any matching character from edges until non-match):
url = "https://www.example.com///"
print(url.rstrip("/"))     # 'https://www.example.com'

tag = "###Important Note###"
print(tag.strip("#"))      # 'Important Note'
```

---

### Alignment & Padding Methods

| Method     | Syntax                        | Description                                                                           |
| :--------- | :---------------------------- | :------------------------------------------------------------------------------------ |
| `center()` | `s.center(width[, fillchar])` | Centers string in a field of given `width`, padded by `fillchar` (default space).     |
| `ljust()`  | `s.ljust(width[, fillchar])`  | Left-aligns string in a field of given `width`.                                       |
| `rjust()`  | `s.rjust(width[, fillchar])`  | Right-aligns string in a field of given `width`.                                      |
| `zfill()`  | `s.zfill(width)`              | Pads numeric string with zeros on the left until `width` is reached. Handles `+`/`-`. |

#### Code Examples:

```python
title = "Python"

print(title.center(20, "="))  # '=======Python======='
print(title.ljust(20, "-"))   # 'Python--------------'
print(title.rjust(20, "-"))   # '--------------Python'

# zfill (Zero Fill)
print("42".zfill(5))          # '00042'
print("-42".zfill(5))         # '-0042' (intelligently keeps sign first!)
print("+3.14".zfill(8))       # '+0003.14'
```

---

### Splitting, Partitioning & Joining

| Method         | Syntax                            | Returns                | Description                                                                      |
| :------------- | :-------------------------------- | :--------------------- | :------------------------------------------------------------------------------- |
| `split()`      | `s.split(sep=None, maxsplit=-1)`  | `list[str]`            | Splits by delimiter. If `sep=None`, splits on consecutive whitespace.            |
| `rsplit()`     | `s.rsplit(sep=None, maxsplit=-1)` | `list[str]`            | Splits from right side up to `maxsplit` times.                                   |
| `splitlines()` | `s.splitlines(keepends=False)`    | `list[str]`            | Splits at line breaks (`\n`, `\r`, `\r\n`). Preserves breaks if `keepends=True`. |
| `partition()`  | `s.partition(sep)`                | `tuple[str, str, str]` | Splits at 1st occurrence into `(before, sep, after)`.                            |
| `rpartition()` | `s.rpartition(sep)`               | `tuple[str, str, str]` | Splits at last occurrence into `(before, sep, after)`.                           |
| `join()`       | `sep.join(iterable)`              | `str`                  | Joins an iterable of strings using `sep` as glue.                                |

#### Code Examples:

```python
# 1. split()
text = "apple,banana,orange,grape"
print(text.split(","))               # ['apple', 'banana', 'orange', 'grape']
print(text.split(",", maxsplit=2))   # ['apple', 'banana', 'orange,grape']

# Default split (splits on any whitespace, handles multiple spaces seamlessly)
data = "Python    is   awesome"
print(data.split())                  # ['Python', 'is', 'awesome']

# 2. rsplit()
path = "home/user/documents/report.pdf"
print(path.rsplit("/", maxsplit=1))  # ['home/user/documents', 'report.pdf']

# 3. splitlines()
multi = "Line 1\nLine 2\r\nLine 3"
print(multi.splitlines())            # ['Line 1', 'Line 2', 'Line 3']
print(multi.splitlines(keepends=True)) # ['Line 1\n', 'Line 2\r\n', 'Line 3']

# 4. partition() & rpartition()
email = "support@service.example.com"
print(email.partition("@"))          # ('support', '@', 'service.example.com')
print(email.rpartition("."))         # ('support@service.example', '.', 'com')
# If separator is not found:
print("hello".partition(":"))        # ('hello', '', '')

# 5. join()
words = ["Python", "is", "fun"]
print(" ".join(words))               # 'Python is fun'
print(" -> ".join(words))            # 'Python -> is -> fun'
print("".join(reversed("stressed"))) # 'desserts'
```

---

### Replacement & Prefix/Suffix Removal

| Method           | Syntax                         | Returns | Description                                                                     |
| :--------------- | :----------------------------- | :------ | :------------------------------------------------------------------------------ |
| `replace()`      | `s.replace(old, new[, count])` | `str`   | Replaces occurrences of `old` with `new`. Optional `count` limits replacements. |
| `removeprefix()` | `s.removeprefix(prefix)`       | `str`   | _(Python 3.9+)_ Removes `prefix` if present; otherwise returns copy unchanged.  |
| `removesuffix()` | `s.removesuffix(suffix)`       | `str`   | _(Python 3.9+)_ Removes `suffix` if present; otherwise returns copy unchanged.  |

#### Code Examples:

```python
text = "one potato, two potato, three potato"

# replace all
print(text.replace("potato", "apple"))        # 'one apple, two apple, three apple'

# replace with count limit
print(text.replace("potato", "apple", 2))     # 'one apple, two apple, three potato'

# removeprefix & removesuffix (Python 3.9+)
filename = "test_script.py"
print(filename.removeprefix("test_"))        # 'script.py'
print(filename.removesuffix(".py"))          # 'test_script'

# Notice the difference between removesuffix and rstrip:
# rstrip strips ANY character in the set:
print("sample.py".rstrip(".py"))             # 'sam' ⚠️ (stripped 'p', 'y', '.')
# removesuffix removes only the exact suffix string:
print("sample.py".removesuffix(".py"))       # 'sample' ✅
```

---

### Translation & Character Mapping

Used for fast batch character replacement or deletion.

| Method            | Syntax                       | Description                                                           |
| :---------------- | :--------------------------- | :-------------------------------------------------------------------- |
| `str.maketrans()` | `str.maketrans(x[, y[, z]])` | Static method to create a mapping translation table.                  |
| `translate()`     | `s.translate(table)`         | Translates characters using the translation table from `maketrans()`. |

#### Code Examples:

```python
# Problem: Replace vowels 'a', 'e', 'i', 'o', 'u' with '1', '2', '3', '4', '5'
table = str.maketrans("aeiou", "12345")
print("hello world".translate(table))  # 'h2ll4 w4rld'

# Problem: Remove all punctuation characters
import string
remove_punct = str.maketrans("", "", string.punctuation)
clean_text = "Hello, World! How's it going?".translate(remove_punct)
print(clean_text)  # 'Hello World Hows it going'
```

---

### Formatting & Tab Expansion

| Method         | Syntax                      | Description                                                                              |
| :------------- | :-------------------------- | :--------------------------------------------------------------------------------------- |
| `format()`     | `s.format(*args, **kwargs)` | Performs string formatting with `{}` positional/keyword placeholders.                    |
| `format_map()` | `s.format_map(mapping)`     | Like `format(**mapping)`, but takes a dict without unpacking. Useful with `defaultdict`. |
| `expandtabs()` | `s.expandtabs(tabsize=8)`   | Expands `\t` characters to spaces using given `tabsize`.                                 |

#### Code Examples:

```python
# format()
print("Hello, {}! You have {} new messages.".format("Sakib", 5))
print("Coordinates: {lat}, {lon}".format(lat="23.8103 N", lon="90.4125 E"))
print("Order: {1}, {0}, {1}".format("First", "Second")) # 'Order: Second, First, Second'

# format_map()
user_data = {"name": "Moon", "role": "Admin"}
template = "Welcome {name}! Role: {role}"
print(template.format_map(user_data))  # 'Welcome Moon! Role: Admin'

# expandtabs()
table_data = "Col1\tCol2\tCol3"
print(table_data.expandtabs(4))   # 'Col1    Col2    Col3'
print(table_data.expandtabs(12))  # 'Col1        Col2        Col3'
```

---

### Encoding & Decoding

| Method           | Syntax                                        | Description                    |
| :--------------- | :-------------------------------------------- | :----------------------------- |
| `encode()`       | `s.encode(encoding='utf-8', errors='strict')` | Encodes string to `bytes`.     |
| `bytes.decode()` | `b.decode(encoding='utf-8', errors='strict')` | Decodes `bytes` back to `str`. |

#### Code Examples:

```python
text = "Python 🐍"

# Encode to bytes (UTF-8)
encoded_bytes = text.encode("utf-8")
print(encoded_bytes)          # b'Python \xf0\x9f\x90\x8d'
print(type(encoded_bytes))    # <class 'bytes'>

# Decode back to string
decoded_text = encoded_bytes.decode("utf-8")
print(decoded_text)           # 'Python 🐍'
```

---

## 3. Global Built-in Functions Used with Strings

Python provides global built-in functions that work on strings:

| Function      | Syntax         | Description & Example                                                                           |
| :------------ | :------------- | :---------------------------------------------------------------------------------------------- |
| `len()`       | `len(s)`       | Returns total number of characters. `len("Python")` -> `6`                                      |
| `str()`       | `str(obj)`     | Converts any object to its string representation. `str(100)` -> `'100'`                         |
| `ord()`       | `ord(char)`    | Returns integer Unicode code point. `ord('A')` -> `65`                                          |
| `chr()`       | `chr(i)`       | Converts integer Unicode code point to character. `chr(65)` -> `'A'`                            |
| `repr()`      | `repr(s)`      | Returns printable official representation (shows quotes/escapes). `repr("Hi\n")` -> `"'Hi\\n'"` |
| `ascii()`     | `ascii(s)`     | Like `repr()`, but escapes non-ASCII characters. `ascii("Pythön")` -> `"'Pyth\\xf6n'"`          |
| `sorted()`    | `sorted(s)`    | Returns a sorted list of characters. `sorted("cba")` -> `['a', 'b', 'c']`                       |
| `reversed()`  | `reversed(s)`  | Returns an iterator yielding characters in reverse. `''.join(reversed("abc"))` -> `'cba'`       |
| `min()`       | `min(s)`       | Returns smallest character by ASCII/Unicode value. `min("Python")` -> `'P'`                     |
| `max()`       | `max(s)`       | Returns greatest character by ASCII/Unicode value. `max("Python")` -> `'y'`                     |
| `enumerate()` | `enumerate(s)` | Yields `(index, character)` pairs for loop iteration.                                           |
| `zip()`       | `zip(s1, s2)`  | Pairs characters from multiple strings element-wise.                                            |
| `hash()`      | `hash(s)`      | Returns string's integer hash (valid because strings are immutable).                            |

#### Code Examples:

```python
text = "Python"

# 1. len()
print(len(text))  # 6

# 2. ord() and chr()
print(ord('A'))   # 65
print(ord('a'))   # 97
print(chr(65))    # 'A'
print(chr(8364))  # '€'

# 3. sorted() and min() / max()
print(sorted(text))      # ['P', 'h', 'n', 'o', 't', 'y']
print(min("banana"))     # 'a'
print(max("banana"))     # 'n'

# 4. enumerate()
for idx, char in enumerate("Code"):
    print(f"Index {idx}: {char}")
# Output:
# Index 0: C
# Index 1: o
# Index 2: d
# Index 3: e

# 5. zip()
for ch1, ch2 in zip("ABC", "123"):
    print(f"{ch1}-{ch2}")
# Output:
# A-1
# B-2
# C-3
```

---

## 4. String Formatting Styles

Python evolved through 3 major ways of formatting strings:

### 1. Modern f-strings (Python 3.6+) — **Recommended**

Fastest, cleanest, and most readable.

```python
name = "Rakib"
score = 95.678

# Basic interpolation
print(f"Hello, {name}!")

# Expressions inside braces
print(f"Score doubled: {score * 2}")

# Precision & Number formatting
print(f"Score: {score:.2f}")           # 'Score: 95.68'
print(f"Large number: {1000000:,}")    # 'Large number: 1,000,000'
print(f"Percentage: {0.756:.1%}")      # 'Percentage: 75.6%'

# Padding & Alignment in f-strings
print(f"{name:>10}")                   # '     Rakib' (right align)
print(f"{name:<10}")                   # 'Rakib     ' (left align)
print(f"{name:^10}")                   # '  Rakib   ' (center align)
print(f"{name:*^10}")                  # '**Rakib***' (center with fill)

# Self-documenting expressions with '=' (Python 3.8+)
x = 10
y = 25
print(f"{x=}, {y=}, {x+y=}")           # 'x=10, y=25, x+y=35'
```

### 2. `str.format()` Method (Python 2.7 & 3.0+)

```python
print("Hello, {}! Your score is {:.2f}".format(name, score))
print("{role} {name}".format(name="Sakib", role="Developer"))
```

### 3. `%` Operator Formatting (Legacy / C-style)

```python
print("Hello, %s! Your score is %.2f" % (name, score))
```

---

## 5. Master Quick-Reference Cheat Sheet

Complete alphabetical lookup table of all string methods:

| Method Name       | Return Type | Brief Summary                                   |
| :---------------- | :---------- | :---------------------------------------------- |
| `capitalize()`    | `str`       | Capitalizes 1st char, lowercases rest           |
| `casefold()`      | `str`       | Aggressive lowercase for caseless comparison    |
| `center(w[, f])`  | `str`       | Centers string in field of width `w`            |
| `count(sub)`      | `int`       | Counts occurrences of `sub`                     |
| `encode()`        | `bytes`     | Encodes string to `bytes`                       |
| `endswith(suf)`   | `bool`      | Checks if string ends with `suf`                |
| `expandtabs(t)`   | `str`       | Expands `\t` to spaces                          |
| `find(sub)`       | `int`       | Lowest index of `sub` or `-1`                   |
| `format(...)`     | `str`       | Formats string with positional/keyword args     |
| `format_map(m)`   | `str`       | Formats string using mapping dictionary         |
| `index(sub)`      | `int`       | Lowest index of `sub` (or raises `ValueError`)  |
| `isalnum()`       | `bool`      | `True` if alphanumeric                          |
| `isalpha()`       | `bool`      | `True` if alphabetic                            |
| `isascii()`       | `bool`      | `True` if all characters are ASCII              |
| `isdecimal()`     | `bool`      | `True` if base-10 decimal digits                |
| `isdigit()`       | `bool`      | `True` if digits (includes superscripts)        |
| `isidentifier()`  | `bool`      | `True` if valid Python identifier               |
| `islower()`       | `bool`      | `True` if all cased characters are lowercase    |
| `isnumeric()`     | `bool`      | `True` if numeric (includes fractions/digits)   |
| `isprintable()`   | `bool`      | `True` if all characters printable              |
| `isspace()`       | `bool`      | `True` if all characters are whitespace         |
| `istitle()`       | `bool`      | `True` if titlecased                            |
| `isupper()`       | `bool`      | `True` if all cased characters are uppercase    |
| `join(iter)`      | `str`       | Joins iterable of strings using separator       |
| `ljust(w[, f])`   | `str`       | Left-justifies string in width `w`              |
| `lower()`         | `str`       | Converts to lowercase                           |
| `lstrip([ch])`    | `str`       | Trims leading whitespace or characters          |
| `maketrans()`     | `dict`      | Creates translation table for `translate()`     |
| `partition(sep)`  | `tuple`     | Splits at 1st `sep` into `(head, sep, tail)`    |
| `removeprefix(p)` | `str`       | Removes prefix `p` (Python 3.9+)                |
| `removesuffix(s)` | `str`       | Removes suffix `s` (Python 3.9+)                |
| `replace(o, n)`   | `str`       | Replaces occurrences of `o` with `n`            |
| `rfind(sub)`      | `int`       | Highest index of `sub` or `-1`                  |
| `rindex(sub)`     | `int`       | Highest index of `sub` (or raises `ValueError`) |
| `rjust(w[, f])`   | `str`       | Right-justifies string in width `w`             |
| `rpartition(s)`   | `tuple`     | Splits at last `s` into `(head, sep, tail)`     |
| `rsplit([sep])`   | `list`      | Splits string from right                        |
| `rstrip([ch])`    | `str`       | Trims trailing whitespace or characters         |
| `split([sep])`    | `list`      | Splits string by delimiter (default whitespace) |
| `splitlines()`    | `list`      | Splits string at line breaks                    |
| `startswith(p)`   | `bool`      | Checks if string starts with `p`                |
| `strip([ch])`     | `str`       | Trims leading & trailing whitespace/chars       |
| `swapcase()`      | `str`       | Inverts uppercase $\leftrightarrow$ lowercase   |
| `title()`         | `str`       | Converts words to titlecase                     |
| `translate(tbl)`  | `str`       | Translates characters using translation table   |
| `upper()`         | `str`       | Converts to uppercase                           |
| `zfill(w)`        | `str`       | Pads numeric string with zeros to width `w`     |

---

## 6. Best Practices & Common Gotchas

### 1. Never Concatenate Strings in Loops with `+`

Because strings are immutable, `s += char` creates a new string and copies data in every iteration, giving $O(N^2)$ time complexity.
Always append to a list and use `''.join()` for $O(N)$ performance:

```python
# ❌ Inefficient O(N^2):
result = ""
for i in range(1000):
    result += str(i)

# ✅ Efficient O(N):
result = "".join([str(i) for i in range(1000)])
```

---

### 2. String Interning: Use `==` for Equality, NOT `is`

- `==` checks value equality (checks if the contents match).
- `is` checks memory identity (checks if they point to the exact same memory address).
  Python interns small strings, so `is` might accidentally work in small scripts, but will fail with dynamically created strings:

```python
a = "hello"
b = "".join(["hel", "lo"])

print(a == b)  # True (always reliable for content comparison)
print(a is b)  # False (different objects in memory!)
```

---

### 3. Check for Substring with `in`, not `find() != -1`

```python
text = "Python programming"

# ❌ Less readable
if text.find("Python") != -1:
    pass

# ✅ Pythonic & Clean
if "Python" in text:
    pass
```

---

### 4. `strip()` vs `removesuffix()` / `removeprefix()`

Remember that `strip("abc")` removes **any combination of characters** `a`, `b`, and `c` from the boundaries, not the substring `"abc"`.
For exact word or extension removal, always use `removeprefix()` or `removesuffix()` (Python 3.9+).

```python
s = "banana"
print(s.rstrip("a"))          # 'banan' (removes all trailing 'a's)

filename = "data.csv.csv"
print(filename.removesuffix(".csv")) # 'data.csv' (removes only the last '.csv')
```

---

_Authored for future reference in Python Programming & Problem Solving._
