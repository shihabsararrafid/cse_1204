class A {
    int x;

    public A() {

        x = 0;
    }

    public A(int x) {
        this.x = x;
    }

    public int getX() {
        return (x + 10);
    }

}

class B extends A {
    int x = 10;

    public int getX() {
        return super.getX();
        // return (x + 10);
    }
}

public class topic01 {
    public static void main(String[] args) {
        B b = new B();
        A a = new A();
        System.out.println(a.getX());
        System.out.println(b.getX());
    }
}