package Topic_01;

import java.util.Scanner;

public class topic01 {
    public static void main(String[] args) {
        System.out.println("Shihab Sarar Islam Rafid..");
        System.out.println("My Address is Netrokona, Bangladesh");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number 1__");
        Integer num1 = sc.nextInt();
        System.out.println("Enter number 2__");
        Integer num2 = sc.nextInt();
        if (num1 > num2) {
            System.out.println(num1 + " is greater than " + num2);
        } else {
            System.out.println(num2 + " is greater than " + num1);
        }
        int arr[] = new int[10];
        for (int i = 0; i < 10; i++) {

            arr[i] = sc.nextInt();
        }
        Integer big = arr[0];
        Integer small = arr[0];
        Integer sum = 0;
        for (int i = 0; i < 10; i++) {

            if (arr[i] < small)
                small = arr[i];
            if (arr[i] > big)
                big = arr[i];
            sum += arr[i];
        }
        System.out.println("Biggest number in the array is " + big);
        System.out.println("Smallest number in the array is " + small);
        double avg = (double) sum / (10 * 1.0);
        System.out.println("Average of the array is " + avg);
    }
}
