import java.util.Arrays;

public class topic06 {
    public static int[] IntialArray() {
        return new int[] { 14, 15, 16, 17, 18, 13, 04, 13, 72, 33 };
    }

    public static int[] SortArray(int[] arr) {
        Arrays.sort(arr);
        return arr;
    }

    public static void PrintArray(int[] arr) {

        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] array = IntialArray();
        PrintArray(array);
        array = SortArray(array);
        PrintArray(array);
    }
}