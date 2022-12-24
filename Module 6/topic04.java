public class topic04 {
    public int mul1(int a, int b) {
        return a * b;
    }

    public static int mul11(int a, int b) {
        return a * b;
    }

    public static void main(String[] args) {
        System.out.println(mul11(3, 14));
        // System.out.println(mul1(3, 14));
        // cannot reference a static from non static
    }
}
