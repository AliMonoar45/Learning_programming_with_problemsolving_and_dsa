""" """

# function.py


def greet(name):
    """Return a greeting message for the given name."""
    return f"Hello, {name}! Welcome to Python functions."


def add_numbers(a, b):
    """Add two numbers and return the result."""
    return a + b


def power(base, exponent=2):
    """Raise base to the power of exponent (default is square)."""
    return base**exponent


def factorial(n):
    """Calculate factorial of n using a loop."""
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result


# Main block: runs only when executed directly
if __name__ == "__main__":
    # Test greet
    print(greet("Ali"))

    # Test add_numbers
    print("Sum:", add_numbers(5, 7))

    # Test power
    print("Square of 4:", power(4))
    print("Cube of 2:", power(2, 3))

    # Test factorial
    print("Factorial of 5:", factorial(5))

def sum(*numbers):
    sum=0
    for i in numbers:
        sum+=i
    return sum

total = sum(1, 2, 3, 4, 5)
print("Total sum:", total)
