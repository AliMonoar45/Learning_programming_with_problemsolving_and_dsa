class Family:
    def __init__(self, address):
        self.address = address

    def __repr__(self):
        return f"Address: {self.address}"


class School:
    def __init__(self, id, level):
        self.id = id
        self.level = level

    def __repr__(self):
        return f"ID: {self.id}, Class: {self.level}"


class Sports:
    def __init__(self, game):
        self.game = game

    def __repr__(self):
        return f"Game: {self.game}"


class Student(Family, School, Sports):
    def __init__(self, address, id, level, game):
        Family.__init__(self, address)
        School.__init__(self, id, level)
        Sports.__init__(self, game)

    def __repr__(self):
        return (
            f"Student({Family.__repr__(self)}, "
            f"{School.__repr__(self)}, "
            f"{Sports.__repr__(self)})"
        )


ali = Student("Dhaka", 10, 12, "CoD")
print(ali)
# Output: Student(Address: Dhaka, ID: 10, Class: 12, Game: CoD)
