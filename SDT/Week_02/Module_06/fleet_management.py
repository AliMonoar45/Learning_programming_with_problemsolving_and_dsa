#  Ena Poribohon


class Company:
    def __init__(self, name, address):
        self.name = name
        self.address = address
        self.bus = []
        self.routes = []
        self.drivers = []
        self.counter = []
        self.manager = []
        self.supervisors = []
        self.fare = []


class Driver:
    def __init__(self, name, licence, age) -> None:
        self.licence = licence
        self.name = name
        self.age = age


class Counter:
    def __init__(self):
        pass

    def purchase_a_ticket(self, start, destination):
        pass


class Passenger:
    pass


class Supervisor:
    pass


red_mia =  Driver('lal mia','123',35)
