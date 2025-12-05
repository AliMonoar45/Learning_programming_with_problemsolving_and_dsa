
# 📘 C++ String Functions with Examples

## 🔹 Capacity

### `s.size()`
Returns the size of the string.
```cpp
string s = "Hello";
cout << s.size(); // 5
```

### `s.max_size()`
Maximum size the string can hold.
```cpp
string s = "Hello";
cout << s.max_size(); // implementation dependent (e.g. ~4e9)
```

### `s.capacity()`
Current allocated capacity.
```cpp
string s = "Hello";
cout << s.capacity(); // >= 5
```

### `s.clear()`
Clears the string.
```cpp
string s = "Hello";
s.clear();
cout << s.empty(); // 1 (true)
```

### `s.empty()`
Checks if string is empty.
```cpp
string s = "";
cout << s.empty(); // 1 (true)
```

### `s.resize(n)`
Resizes the string.
```cpp
string s = "Hello";
s.resize(3);
cout << s; // Hel
```

---

## 🔹 Element Access

### `s[i]`
Access element by index.
```cpp
string s = "Hello";
cout << s[1]; // e
```

### `s.at(i)`
Access element with bounds checking.
```cpp
string s = "Hello";
cout << s.at(4); // o
```

### `s.back()`
Last element.
```cpp
string s = "Hello";
cout << s.back(); // o
```

### `s.front()`
First element.
```cpp
string s = "Hello";
cout << s.front(); // H
```

---

## 🔹 Modifiers

### `s +=`
Append another string.
```cpp
string s = "Hello";
s += " World";
cout << s; // Hello World
```

### `s.append()`
Append another string.
```cpp
string s = "Hello";
s.append("!");
cout << s; // Hello!
```

### `s.push_back()`
Add character at the end.
```cpp
string s = "Hi";
s.push_back('!');
cout << s; // Hi!
```

### `s.pop_back()`
Remove last character.
```cpp
string s = "Hi!";
s.pop_back();
cout << s; // Hi
```

### `s =`
Assign string.
```cpp
string s;
s = "Hello";
cout << s; // Hello
```

### `s.assign()`
Assign string.
```cpp
string s;
s.assign("World");
cout << s; // World
```

### `s.erase()`
Erase characters.
```cpp
string s = "Hello World";
s.erase(5, 6);
cout << s; // Hello
```

### `s.replace()`
Replace portion.
```cpp
string s = "Hello World";
s.replace(6, 5, "C++");
cout << s; // Hello C++
```

### `s.insert()`
Insert at position.
```cpp
string s = "Hello";
s.insert(5, " World");
cout << s; // Hello World
```

---

## 🔹 Iterators

### `s.begin()`
Iterator to first element.
```cpp
string s = "Hello";
cout << *s.begin(); // H
```

### `s.end()`
Iterator to one past last element.
```cpp
string s = "Hello";
cout << *(s.end() - 1); // o
```

---

# 🎯 Summary
This file covers **capacity, element access, modifiers, and iterators** with examples.  
Each snippet is minimal and contest‑ready for quick reference.


---
