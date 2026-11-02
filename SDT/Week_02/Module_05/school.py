class Student:
    # Represents a student with name, class, and unique ID
    def __init__(self, name, current_class, id):
        self.name = name
        self.id = id
        self.current_class = current_class

    def __repr__(self) -> str:
        # Readable string representation of a student
        return f"Student({self.name}, {self.current_class}, {self.id})"


class Teacher:
    # Represents a teacher with name, subject, and unique ID
    def __init__(self, name, subject, id) -> None:
        self.name = name
        self.subject = subject
        self.id = id

    def __repr__(self) -> str:
        # Readable string representation of a teacher
        return f"Teacher: {self.name}, subject: {self.subject}"


class School:
    def __init__(self, name):
        self.name = name
        self.teachers = []  # list of Teacher objects
        self.students = []  # list of Student objects

    def add_teacher(self, name, subject):
        # Auto-generate teacher ID starting from 101
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)

    def enroll(self, name, fee):
        # Minimum fee required to enroll
        if fee < 6500:
            return "Not enough fee"
        else:
            # Auto-generate student ID starting from 1
            id = len(self.students) + 1
            student = Student(name, "C", id)
            self.students.append(student)
            return f"{name} is enrolled with id: {id}, extra money {fee - 6500}"

    def __repr__(self) -> str:
        # Print school summary: all teachers and students
        print("Welcome to", self.name)
        print("--------Our Teachers---------")
        for teacher in self.teachers:
            print(teacher)

        print("--------Our Students---------")
        for student in self.students:
            print(student)
        return "all done for now"


# ── Standalone usage examples (commented out) ────────────────────────────────
# student1 = Student("Rakib", "Class 10", "01")
# student2 = Student("Jibon", "Class 10", "02")

# ranbir = Teacher("Ranbeer k", "Algorithm", 101)

# print(student1)
# print(student2)

# ── Create school and enroll students ────────────────────────────────────────
phitron = School("Phitron")

phitron.enroll("alia", 5200)  # insufficient fee — rejected
phitron.enroll("rani", 8000)
phitron.enroll("aish", 90000)
phitron.enroll("Bhijan", 100000)

# ── Add teachers ─────────────────────────────────────────────────────────────
phitron.add_teacher("Tom Crouse", "Algo")
phitron.add_teacher("Nolan", "Ds")
phitron.add_teacher("Decaf", "Cpp")

print(phitron)
