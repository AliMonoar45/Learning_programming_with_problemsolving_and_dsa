class Pen:
    def __init__(self, brand, price, color):
        self.brand = brand
        self.price = price
        self.color = color


pen1 = Pen("Matador", 10, "Black")
pen2 = Pen("Sam", 102, "Red")
pen3 = Pen("Jelly", 120, "Blue")

print(pen1.brand, pen1.price, pen1.color)
print(pen2.brand, pen2.price, pen2.color)
print(pen3.brand, pen3.price, pen3.color)
