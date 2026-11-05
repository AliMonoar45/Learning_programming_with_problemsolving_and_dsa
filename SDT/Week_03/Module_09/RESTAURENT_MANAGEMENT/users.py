# Customer
# Employee
# Admin

from abc import ABC
from orders import Order


class User(ABC):
    def __init__(self, name, phone, email, address):
        self.name = name
        self.phone = phone
        self.email = email
        self.address = address


class Customer(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)
        self.cart = Order()

    def view_menu(self, restaurant):
        restaurant.menu.show_menu()

    def add_to_cart(self, restaurant, item_name, quantity):
        item = restaurant.menu.find_item(item_name)
        if item:
            if quantity > item.quantity:
                print(f"Item Quantity Exceeded by : {quantity-item.quantity} !!!")
            else:
                item.quantity = quantity
                self.cart.add_item(item)
                print("Item added!!")
        else:
            print("Item Not Found")

    def view_cart(self):
        print("<--View Cart-->")
        print("Name\tPrice\tQuantity")
        for item, quantity in self.cart.items.items():  # empty cart need to be added
            print(f"{item.name}\t{item.price}\t{quantity}")

        print(f"Total Price : {self.cart.total_price}")

    def pay_bill(self):
        print(f"Total {self.cart.total_price} paid successfully!!!")
        self.cart.clear()


class Employee(User):
    def __init__(self, name, phone, email, address, age, designation, salary):
        super().__init__(name, phone, email, address)
        self.age = age
        self.designation = designation
        self.salary = salary


class Admin(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)

    def add_employee(self, restaurant, employee):
        restaurant.add_employee(employee)

    def view_employee(self, restaurant):
        restaurant.view_employee()

    def add_new_item(self, restaurant, item):
        restaurant.menu.add_menu_item(item)

    def remove_item(self, restaurant, item):
        restaurant.menu.remove_item(item)

    def view_menu(self, restaurant):
        restaurant.menu.show_menu()


""" mamar_res = Restaurant("Mamar Restaurant")

# mn = Menu()

item = FoodItem("Pizza", 12.43, 10)
item2 = FoodItem("Burger", 10, 30)

admin = Admin("ali", "0176", "any@mail.com", "Dhaka")
admin.add_new_item(mamar_res, item)
admin.add_new_item(mamar_res, item2)

# mn.add_menu_item(item)
# mn.add_menu_item(item2)
# mn.show_menu()


customer1 = Customer("rohim", "017333", "mail@gmail.com", "Dhaka")
customer1.view_menu(mamar_res)

item_name = input("Enter item Name: ")
item_quantity = int(input("Enter Item Quantity : "))

customer1.add_to_cart(mamar_res, item_name, item_quantity)

customer1.view_cart()
 """
