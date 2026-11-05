from food_item import FoodItem
from menu import Menu
from users import Customer, Admin, Employee
from restaurant import Restaurant
from orders import Order

mamar_restaurant = Restaurant("MAMAR RESTAURANT")


def customer_menu():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")

    customer = Customer(name=name, email=email, phone=phone, address=address)

    while True:
        print(f"Welcome {customer.name} !!")
        print(f"1. View Menu")
        print(f"2. Add item to cart")
        print(f"3. View Cart")
        print(f"4. Pay Bill")
        print(f"5. Exit")

        choice = int(input("Enter Your Choice : "))

        if choice == 1:
            customer.view_menu(mamar_restaurant)
        elif choice == 2:
            item_name = input("Enter item Name : ")
            item_quantity = int(input("Enter Quantity : "))
            customer.add_to_cart(
                restaurant=mamar_restaurant, item_name=item_name, quantity=item_quantity
            )
        elif choice == 3:
            customer.view_cart()
        elif choice == 4:
            customer.pay_bill()
        elif choice == 5:
            break
        else:
            print("Invalid Input, Try again !!!!")


def admin_menu():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")

    admin = Admin(name=name, email=email, phone=phone, address=address)

    while True:
        print(f"Welcome {admin.name} !!")
        print(f"1. Add New Item")
        print(f"2. Add New Employee")
        print(f"3. View Employee")
        print(f"4. View Items")
        print(f"5. Delete Items")
        print(f"6. Exit")

        choice = int(input("Enter Your Choice : "))

        if choice == 1:
            item_name = input("Enter Item Name: ")
            item_price = float(input("Enter Item Price: "))
            item_quantity = float(input("Enter Item Quantity: "))
            item = FoodItem(name=item_name, price=item_price, quantity=item_quantity)
            admin.add_new_item(restaurant=mamar_restaurant, item=item)
        elif choice == 2:
            name = input("Enter Employee Name: ")
            email = input("Enter Employee Email: ")
            phone = input("Enter Employee Phone: ")
            address = input("Enter Employee Address: ")
            designation = input("Enter Employee Designation: ")
            age = input("Enter Employee Age: ")
            salary = input("Enter Employee Salary: ")

            employee = Employee(
                name=name,
                phone=phone,
                email=email,
                address=address,
                age=age,
                salary=salary,
                designation=designation,
            )
            admin.add_employee(restaurant=mamar_restaurant, employee=employee)
        elif choice == 3:
            admin.view_employee(restaurant=mamar_restaurant)
        elif choice == 4:
            admin.view_menu(restaurant=mamar_restaurant)
        elif choice == 5:
            item = input("Enter Item Name To Delete: ")
            admin.remove_item(restaurant=mamar_restaurant, item=item)
        elif choice == 6:
            break
        else:
            print("Invalid Input, Try again !!!!")


while True:
    print("Welcome!!!!")
    print("1. Customer")
    print("2. Admin")
    print("3. Exit")
    choice = int(input("Enter Your Choice: "))

    if choice == 1:
        customer_menu()
    elif choice == 2:
        admin_menu()
    elif choice == 3:
        break
    else:
        print("Invalid Input")
