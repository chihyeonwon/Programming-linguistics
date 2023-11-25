enum Gender {
    MALE(1), FEMALE(2);

    private final int value;

    Gender(int value) {
        this.value = value;
    }

    public int value() {
        return this.value;
    }
}

// enum Gender {
//     MALE, FEMALE;
// }

class Student {
    public String name;
    public Gender gender;

    Student(String name, Gender gender) {
        this.name = name;
        this.gender = gender;
    }
}

public class EnumExam {
    public static void main(String[] args) {
        Student kim = new Student("Kim DukBae", Gender.MALE);
        if(kim.gender == Gender.MALE) {
            System.out.println("Male Student");
        }
        if(kim.gender == Gender.FEMALE) {
            System.out.println("Female Student");
        }
        // kim.gender++;   // Error
        System.out.println(kim.gender.ordinal());
        // System.out.println(Gender.MALE == 0);   // Error
    }
}