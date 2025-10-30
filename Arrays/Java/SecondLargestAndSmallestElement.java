


public class SecondLargestAndSmallestElement{
    public static int sLargest(int[]arr, int n){
        int largest=arr[0];
        int sLargest=-1;
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                sLargest=largest;
                largest=arr[i]; 
            }
            else if(arr[i]<largest && arr[i]>sLargest){
                sLargest=arr[i];
            }
        }
        return sLargest;
    }
    public static int sSmallest(int[]arr, int n){
       int sSmallest=Integer.MAX_VALUE;
       int smallest=arr[0];
       for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            sSmallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i]!=smallest && arr[i]<sSmallest){
            sSmallest=arr[i];
        }
       }

       return sSmallest;
    }
    public static void main(String[] args) {
        int[]arr={1,4,2,13,13,8,7,7};
        int n=arr.length;

        System.out.println("The second largest element is :"+sLargest(arr, n));
        System.out.println("The second smallest element is :"+sSmallest(arr, n));
    }
}