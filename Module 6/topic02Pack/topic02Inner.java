package topic02Pack;

public class topic02Inner {

    public static void name() {
        System.out.println("My name from public method");
    }

    private static void name1() {
        System.out.println("My name from private method");
    }

    protected static void name2() {

        System.out.println("My name from protected method");
    }

    static void name3() {
        System.out.println("My name from default method");
    }

    public static void main(String[] args) {
        name();
        name1();
        name2();
        name3();
    }
}
