import java.util.Scanner;
package newPackage

public class topic2 {

    public static void main(String[] args) throws Exception {
        int arr[] = { 10, 20, 30, 40, 50 };
        int i;
        int maxi;
        float sum = 0;

        for (i = 0; i < 5; i++) {
            System.out.println(+arr[i]);
        }

        int brr[] = new int[10];
        Scanner sc = new Scanner(System.in);
        for (i = 0; i < 5; i++) {
            brr[i] = sc.nextInt();
        }
        for (i = 0; i < 5; i++) {
            System.out.println(+brr[i]);
        }
        maxi = brr[0];
        for (i = 0; i < 10; i++) {
            sum = sum + brr[i];

            if (maxi < brr[i]) {
                maxi = brr[i];
            }
        }
        System.out.println("max = " + maxi);
        System.out.println("AVERAGE = " + sum / 5);

    }

}