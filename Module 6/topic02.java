import topic02Pack.*;

public class topic02 extends topic02Inner {
    public static void main(String[] args) {
        topic02Inner.name();
        // topic02Inner.name1();this are not accessible
        // topic02Inner.name3();this are not accessible

        topic02Inner.name2();
    }
}

class topic021 {

    public static void main(String[] args) {
        topic02Inner.name();
        //topic02Inner.name1();private
        //topic02Inner.name2();protected
        //topic02Inner.name3();default
    }
}
