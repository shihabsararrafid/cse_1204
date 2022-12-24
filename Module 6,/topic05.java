public class topic05 {

    public static void main(String[] args) {
        String str = "Grasp all Lose all shelloo";
        String str1 = new String("This is new string");
        System.out.println(str.charAt(6));
        int res = str.compareTo(str1);
        System.out.println(res);
        String s = str.concat(str1);
        System.out.println(s);
        Boolean res1 = str.equals(s);
        System.out.println(res1);
        if (str1.isEmpty())
            System.out.println("Str1 is Empty");
        else
            System.out.println("Str1 is not empty");
        System.out.println("The length of str1 is " + str1.length());
        String sr = str.replace('a', 'x');
        System.out.println(sr);
        String substr = str.substring(4, 8);
        substr.toLowerCase();
        String su = substr.toUpperCase();
        System.out.println(su);
        

        // returns ch at that index
    }
}