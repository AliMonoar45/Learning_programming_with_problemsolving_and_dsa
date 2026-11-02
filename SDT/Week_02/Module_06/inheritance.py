class Laptop:
    def __init__(self, brand, price, color, memory):
        self.brand = brand
        self.price = price
        self.color = color
        self.memory = memory

    def run(self):
        return f"running laptop: {self.brand}"

    def coding(self):
        return f"learning python and practicing"


class Phone:

    def __init__(self, brand, price, color, memory, dual_sim):
        self.brand = brand
        self.price = price
        self.color = color
        self.memory = memory
        self.dual_sim = dual_sim

    def phone_call(self, number, text):
        return f"Sending SMS to {number} mesage: {text}"

    def run(self):
        return f"running phone: {self.brand}"


class Camera:
    def __init__(self, brand, price, color, pixel):
        self.brand = brand
        self.price = price
        self.color = color
        self.pixel = pixel

    def run(self):
        pass

    def change_lens(self):
        pass
