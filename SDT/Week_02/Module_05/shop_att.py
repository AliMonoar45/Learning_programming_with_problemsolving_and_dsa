class Shop:

    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = []

    def add_to_cart(self, item):
        self.cart.append(item)


mehzaben = Shop("Mehzaben")
mehzaben.add_to_cart("shoes")
mehzaben.add_to_cart("Phone")
print(mehzaben.cart)

nisho = Shop("Nisho")
nisho.add_to_cart("cap")
nisho.add_to_cart("watch")
print(nisho.cart)
