#  base class, parent class, common attrubute + functionality class
#  derived class, child class, uncommon attrubute + functionality class


#  parant class
class Gadget:
    def __init__(self, brand, price, color, origin) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin

    def run(self):
        return f"running laptop: {self.brand}"


# child class
class Laptop:
    def __init__(self, memory, ssd):
        self.memory = memory
        self.ssd = ssd

    def coding(self):
        return f"learning python and practicing"


# child class
class Phone(Gadget):

    def __init__(self, brand, price, color, origin, dual_sim):
        self.dual_sim = dual_sim
        super().__init__(brand, price, color, origin)

    def phone_call(self, number, text):
        return f"Sending SMS to {number} mesage: {text}"

    def __repr__(self):
        return f"Phone: {self.brand}, price: {self.price}, color: {self.color}, origin: {self.origin}, dual_sim: {self.dual_sim}"


# child class
class Camera:
    def __init__(self, pixel):
        self.pixel = pixel

    def change_lens(self):
        pass


# inheritance
my_phone = Phone("iPhone", 120000, "red", "China", True)
# my_phone.phone_call()


print(my_phone)
