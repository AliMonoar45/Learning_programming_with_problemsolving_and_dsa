class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

    def __repr__(self):
        return f"Product(name='{self.name}', price={self.price}, quantity={self.quantity})"


class Shop:
    def __init__(self, name):
        self.name = name
        self.products = []

    def add_product(self, product):
        """Adds a product to the shop using the Product class."""
        if isinstance(product, Product):
            self.products.append(product)
            print(f"Product '{product.name}' has been added to {self.name}.")
        else:
            print("Error: Only instances of Product can be added.")

    def buy_product(self, product_name, quantity=1):
        """Buys a product if available in the shop."""
        for product in self.products:
            if product.name.lower() == product_name.lower():
                if product.quantity >= quantity:
                    product.quantity -= quantity
                    print(f"🎉 Congratulations! You have successfully bought {quantity} x '{product.name}'!")
                    return
                else:
                    print(f"Sorry, '{product.name}' is out of stock or does not have enough quantity. (Available: {product.quantity})")
                    return

        print(f"Sorry, '{product_name}' is not available in {self.name}.")


# Example usage:
if __name__ == "__main__":
    # Create a Shop
    my_shop = Shop("Tech Zone")

    # Create Products using the Product class
    laptop = Product("Laptop", 75000, 5)
    mouse = Product("Mouse", 500, 10)
    keyboard = Product("Keyboard", 1500, 2)

    # Add products to the shop
    my_shop.add_product(laptop)
    my_shop.add_product(mouse)
    my_shop.add_product(keyboard)

    print("\n--- Buying Products ---")
    # Successfully buy a product
    my_shop.buy_product("Laptop", 1)

    # Buy another product
    my_shop.buy_product("Mouse", 2)

    # Try to buy more than available stock
    my_shop.buy_product("Keyboard", 5)

    # Try to buy a product that doesn't exist
    my_shop.buy_product("Monitor")
