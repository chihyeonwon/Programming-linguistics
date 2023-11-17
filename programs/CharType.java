public class CharType {
    public static void main(String[] args) {
        char a = 'A';
        int c = a;
        char b = '가';
        int d = b;

        System.out.println(a);
        System.out.println(c);
        System.out.println(Character.BYTES);
        System.out.println(b);
        System.out.println(d);
    }
}