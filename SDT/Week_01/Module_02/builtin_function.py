# Python Built-in Functions Demonstration
# Each example shows what the function does

# Basic numeric functions
print(abs(-5))  # abs → absolute value
print(pow(2, 3))  # pow → exponentiation (2^3 = 8)
print(round(3.14159, 2))  # round → round to given decimals
print(divmod(10, 3))  # divmod → returns (quotient, remainder)

# Type conversion
print(int("42"))  # int → convert to integer
print(float("3.14"))  # float → convert to float
print(str(123))  # str → convert to string
print(bool(0))  # bool → convert to boolean
print(complex(2, 3))  # complex → create complex number
print(bytes("abc", "utf-8"))  # bytes → convert to bytes
print(bytearray("abc", "utf-8"))  # bytearray → mutable bytes
print(memoryview(b"hello"))  # memoryview → view of bytes

# Sequence and collection functions
print(len([1, 2, 3]))  # len → length of object
print(max([1, 5, 3]))  # max → largest element
print(min([1, 5, 3]))  # min → smallest element
print(sum([1, 2, 3]))  # sum → sum of elements
print(sorted([3, 1, 2]))  # sorted → sorted list
print(list("abc"))  # list → convert to list
print(tuple("abc"))  # tuple → convert to tuple
print(set([1, 2, 2, 3]))  # set → convert to set
print(dict(a=1, b=2))  # dict → create dictionary
print(frozenset([1, 2, 3]))  # frozenset → immutable set
print(range(5))  # range → sequence of numbers

# Iteration helpers
print(list(enumerate(["a", "b"])))  # enumerate → index + value pairs
print(list(zip([1, 2], [3, 4])))  # zip → combine iterables
print(list(map(str, [1, 2, 3])))  # map → apply function to iterable
print(
    list(filter(lambda x: x > 2, [1, 2, 3, 4]))
)  # filter → keep items that match condition
print(any([0, 1, 0]))  # any → True if any element is True
print(all([1, 2, 3]))  # all → True if all elements are True
print(next(iter([10, 20, 30])))  # next → get next item from iterator

# Object info
print(type(42))  # type → type of object
print(isinstance(42, int))  # isinstance → check type
print(issubclass(bool, int))  # issubclass → check subclass
print(id(42))  # id → unique identifier
print(hash("hello"))  # hash → hash value
print(callable(len))  # callable → check if object is callable
print(dir([]))  # dir → list attributes/methods
print(vars())  # vars → dict of local variables
print(globals())  # globals → dict of global variables
print(locals())  # locals → dict of local variables

# Input/output
# input() → read user input (commented to avoid blocking)
# name = input("Enter your name: ")
print(open)  # open → open file (returns file object)
print(print("Hello"))  # print → display output

# Evaluation and execution
print(eval("2+3"))  # eval → evaluate string as Python expression
# exec("x=5")          # exec → execute Python code dynamically
# print(x)

# Utility
print(repr("hello"))  # repr → string representation
print(format(3.14159, ".2f"))  # format → formatted string
print(bin(10))  # bin → binary string
print(oct(10))  # oct → octal string
print(hex(255))  # hex → hexadecimal string
print(chr(65))  # chr → character from Unicode code
print(ord("A"))  # ord → Unicode code of character
print(ascii("ñ"))  # ascii → printable representation
print(complex(1, 2))  # complex → complex number

# Special functions
print(object())  # object → base object
print(super(int))  # super → call parent class methods
print(property())  # property → define managed attribute
print(staticmethod(lambda: "hi"))  # staticmethod → define static method
print(classmethod(lambda cls: "hi"))  # classmethod → define class method

# Help and debugging
# help(len)            # help → show documentation
print(globals())  # globals → global namespace
print(locals())  # locals → local namespace
