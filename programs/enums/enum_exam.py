import enum

MALE = 1
FEMALE = 2

class Gender(enum.Enum):
    MALE = 1
    FEMALE = 2

for gender in Gender:
    print(gender.name, gender.value)

class Student:
    def __init__(self, name, gender):
        self.name = name
        self.gender = gender

kim = Student("Kim DukBae", Gender.MALE)

if kim.gender == Gender.MALE:
    print("Male student")
elif kim.gender == Gender.FEMALE:
    print("Female student")

if Gender.MALE == 1:
    print("Gender.MALE is 1")

# print(Gender.MALE + 1)  # ERROR