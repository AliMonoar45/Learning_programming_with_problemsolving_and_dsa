try:
    result = 45/0
except ZeroDivisionError:
    print("Error: Cannot divide by zero")
finally:
    print("This will run no matter what.")

print('done')