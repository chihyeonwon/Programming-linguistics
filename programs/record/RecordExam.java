class Student {
    public String name;
    public int kor;
    public int eng;
    public int math;

    public Student(String name, int kor, int eng, int math) {
        this.name = name;
        this.kor = kor;
        this.eng = eng;
        this.math = math;
    }
}

public class RecordExam {
    public static void main(String[] args) {
        Student kim = new Student("Kim DukBae", 80, 85, 90);
        System.out.println(kim.name);
        System.out.println(kim.kor);
        System.out.println(kim.eng);
        System.out.println(kim.math);
    }
}
