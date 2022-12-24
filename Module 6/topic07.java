import java.util.Arrays;

public class topic07 {
    public static int FindBig(int... ax) {
        // int[] ar1 = ax;
        int big = ax[0];
        for (int i = 0; i < 4; i++) {

            if (ax[i] > big) {
                big = ax[i];
            }
        }
        return big;
        // System.out.println(ax[0]);
    }

    public static void main(String[] args) {
        int[] arr = new int[] { 1, 2, 3, 5, 6, 7, 8, 9, 0, 10 };
        System.out.println(Arrays.toString(arr));
        System.out.println("Biggest element in first four elements__" + FindBig(arr));

    }
}
