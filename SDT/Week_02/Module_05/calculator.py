class Calculator:
    brand = "Casio MS990"

    # functions
    def add(self, num1, num2):
        return num1 + num2

    def deduct(self, num1, num2):
        return num1 - num2

    def multiply(self, num1, num2):
        return num1 * num2
    
    def divide(self, num1, num2):
        return num1 / num2
    
    def power(self, num1, num2):
        return num1 ** num2
    
    def square_root(self, num):
        return num ** 0.5
    
    def cube_root(self, num):
        return num ** (1/3)


my_calculator = Calculator()

print(my_calculator.add(10, 20))
print(my_calculator.deduct(10, 20))
print(my_calculator.multiply(10, 20))
print(my_calculator.divide(10, 20))
print(my_calculator.power(10, 20))
print(my_calculator.square_root(10))
print(my_calculator.cube_root(10))