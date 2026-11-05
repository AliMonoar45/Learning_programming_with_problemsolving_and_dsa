class StudentDatabase:
    student_list = []

    @classmethod
    def add_student(self, student):
        self.student_list.append(student)


class Student:
    def __init__(self, student_id, name, department, is_enrolled=False):
        self.__student_id = student_id
        self.__name = name
        self.__department = department
        self.__is_enrolled = is_enrolled
        StudentDatabase.add_student(self)

    def get_student_id(self):
        return self.__student_id

    def enroll_student(self):
        if self.__is_enrolled:
            print(
                f"Error: Student {self.__name} (ID: {self.__student_id}) is already enrolled."
            )
        else:
            self.__is_enrolled = True
            print(
                f"Student {self.__name} (ID: {self.__student_id}) has been enrolled successfully."
            )

    def drop_student(self):
        if not self.__is_enrolled:
            print(
                f"Error: Student {self.__name} (ID: {self.__student_id}) is not currently enrolled."
            )
        else:
            self.__is_enrolled = False
            print(f"Student {self.__name} (ID: {self.__student_id}) has been dropped.")

    def view_student_info(self):
        print(
            f"ID: {self.__student_id}, Name: {self.__name}, Department: {self.__department}, Enrolled: {self.__is_enrolled}"
        )


s1 = Student(101, "Rahim Uddin", "Computer Science", True)
s2 = Student(102, "Karim Mia", "Electrical Engineering", False)
s3 = Student(103, "Nusrat Jahan", "Business Administration", True)


def find_student(student_id):
    for student in StudentDatabase.student_list:
        if student.get_student_id() == student_id:
            return student
    return None


while True:
    print("\nStudent Management Menu")
    print("1. View All Students")
    print("2. Enroll Student")
    print("3. Drop Student")
    print("4. Exit")

    choice = input("Enter your choice (1-4): ").strip()

    if choice == "1":
        if not StudentDatabase.student_list:
            print("No students found in the database.")
        else:
            print("\nStudent List:")
            for student in StudentDatabase.student_list:
                student.view_student_info()

    elif choice == "2":
        s_id = input("Enter Student ID to enroll: ").strip()
        student = find_student(s_id)
        if student:
            student.enroll_student()
        else:
            print("Error: Invalid Student ID. Student not found.")

    elif choice == "3":
        s_id = input("Enter Student ID to drop: ").strip()
        student = find_student(s_id)
        if student:
            student.drop_student()
        else:
            print("Error: Invalid Student ID. Student not found.")

    elif choice == "4":
        print("Exiting program...")
        break

    else:
        print("Invalid choice. Please enter a number between 1 and 4.")
