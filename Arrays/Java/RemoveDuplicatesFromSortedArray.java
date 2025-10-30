import java.util.*;

public class RemoveDuplicatesFromSortedArray {
    public static int removeDuplicates(List<Integer> arr, int n) {
        if (n == 0) return 0;
        int i = 0;
        for (int j = 1; j < n; j++) {
            if (!arr.get(i).equals(arr.get(j))) {
                i++;
                arr.set(i, arr.get(j));
            }
        }
        return i + 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> arr = new ArrayList<>();

        System.out.println("Enter the number of elements in array:");
        int n = sc.nextInt();

        System.out.println("Enter the elements of array (sorted):");
        for (int i = 0; i < n; i++) {
            arr.add(sc.nextInt());
        }

        int newLength = removeDuplicates(arr, n);
        System.out.println("The length of array after removing duplicates: " + newLength);

        System.out.print("Array after removing duplicates: ");
        for (int i = 0; i < newLength; i++) {
            System.out.print(arr.get(i) + " ");
        }
        System.out.println();
        sc.close();
    }
}
