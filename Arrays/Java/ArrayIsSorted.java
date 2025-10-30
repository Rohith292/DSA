public class ArrayIsSorted {
    public static boolean isSorted(int[]arr){
        int n=arr.length;

        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){

            }else{
                return  false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        int arr[]={1,2,3,4,5,7};
        System.out.println("the result for if the given array is sorted is->"+isSorted(arr));
    }
}
