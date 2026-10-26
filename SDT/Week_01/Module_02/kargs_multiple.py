def full_name(first, last):
    name = f"full name is: {first} {last}"
    return name


# take parameters in order
# name = full_name("ali", "monoar")
name = full_name(last="monoar", first="ali")
print(name)
