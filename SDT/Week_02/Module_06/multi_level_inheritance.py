class Vhicle:
    def __init__(self, name, price) -> None:
        self.namme = name
        self.price = price

    def __repr__(self):
        return f"{self.namme} {self.price}"

    def move(self):
        pass


class Bus(Vhicle):
    def __init__(self, name, price, seat) -> None:
        self.seat = seat
        super().__init__(name, price)

    def __repr__(self) -> str:
        return super().__repr__()


class Truck(Vhicle):
    def __init__(self, name, price, weight):
        self.weight = weight
        super().__init__(name, price)


class PickUpTruck(Truck):
    def __init__(self, name, price, weight):
        super().__init__(name, price, weight)


class ACBus(Bus):
    def __init__(self, name, price, seat, temperature):
        self.temperature = temperature
        super().__init__(name, price, seat)

    def __repr__(self) -> str:
        print(f"{self.seat}")
        return super().__repr__()


green_line = ACBus("Green", 50000000, 22, 16)
print(green_line)
