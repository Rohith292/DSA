import java.util.*;

class Largest {
    public int largest(List<Integer> arr, int n) {
        int max = arr.get(0);
        for (int i = 1; i < n; i++) {
            if (arr.get(i) > max) {
                max = arr.get(i);
            }
        }
        return max;
    }
}

public class LargestElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> arr = new ArrayList<>();

        System.out.println("Enter the number of elements in array:");
        int n = sc.nextInt();

        System.out.println("Enter the elements of array:");
        for (int i = 0; i < n; i++) {
            arr.add(sc.nextInt());
        }

        Largest l = new Largest();
        int result = l.largest(arr, n);
        System.out.println("The largest element is -> " + result);

        sc.close();
    }
}

