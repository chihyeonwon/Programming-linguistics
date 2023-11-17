public class StringExam {

    public static String msg = "Hello World";

    public static void main(String[] args) {
        String msg = "Hello Korea"; // String msg = new String("Hello Korea");
        StringBuffer msg1 = new StringBuffer("Hello ");

        System.out.println("Local msg: " + msg);
        System.out.println("The length of msg: " + msg.length());

        System.out.println("Class msg:" + StringExam.msg);

        System.out.println(msg1);
        msg1.append("Korea");
        System.out.println(msg1);
    }
}
