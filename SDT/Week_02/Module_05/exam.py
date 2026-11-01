import random
class Exam:

    def __init__(self, name):
        self.name = name
    def get_marks(self):
        return random.randint(70,100)


my_exam = Exam("ali")
omar_exam = Exam("omar")
queen_exam = Exam("Queen")

print('My score: ',my_exam.get_marks())
print('Omar score: ',omar_exam.get_marks())
print("Queen score: ", queen_exam.get_marks())
