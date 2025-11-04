# Pointer

 Pointer is a type or variable which store the address of variable.

pointer formate specifier is %p and address is &variable_name

```
int a = 10;
    printf("%d\n", a);
    printf("%p", &a);
```
output:
```
10
0061FF1C
```

## pointer variable declare 

data_type_of_desire_variable* name_of_ptr_variable;
```
int* ptr; 
or
int *ptr;

prr=&a;
```


## 🔹 Pointer in C

A **pointer** is a variable that stores the memory address of another variable.

### 📌 Syntax
```c
int a = 10;
int *p = &a; // p holds the address of a
```

### 📘 Explanation
- `int *p` declares a pointer to an integer.
- `&a` gives the address of variable `a`.
- `*p` dereferences the pointer to access the value stored at that address.

---

## 🔹 Pass by Value

In **pass by value**, a copy of the actual variable is passed to the function. Changes made inside the function do **not** affect the original variable.

### 📌 Example
```c
void modify(int x) {
    x = x + 5;
}

int main() {
    int a = 10;
    modify(a);
    printf("%d", a); // Output: 10
}
```

### 📘 Key Point
- `x` is a copy of `a`. Modifying `x` does not change `a`.

---

## 🔹 Pass by Reference

In **pass by reference**, the address of the variable is passed to the function. Changes made inside the function **do** affect the original variable.

### 📌 Example
```c
void modify(int *x) {
    *x = *x + 5;
}

int main() {
    int a = 10;
    modify(&a);
    printf("%d", a); // Output: 15
}
```

### 📘 Key Point
- `*x` accesses the original variable via its address.
- Modifying `*x` directly changes `a`.

---


## 🔹 Reference and Dereference in C

When working with pointers, two key concepts come up: **reference** and **dereference**.

### 📌 Reference (`&`)
Referencing means getting the **address** of a variable. You use the `&` operator to do this.

```c
int a = 10;
int *p = &a; // p now holds the address of a
```

- `&a` gives the memory location of `a`.
- This is useful when you want to pass a variable by reference to a function or store its address in a pointer.

### 📌 Dereference (`*`)
Dereferencing means accessing the **value** stored at a memory address. You use the `*` operator to do this.

```c
int a = 10;
int *p = &a;
printf("%d", *p); // prints 10
```

- `*p` accesses the value at the address stored in `p`.
- This is how you read or modify the original variable through its pointer.

### 🧠 Quick Analogy
Think of a pointer like a house address:
- `&` is how you find the address of the house.
- `*` is how you walk into the house and see what’s inside.
---

