class opp1 {
    public static boolean strictlySorted(int arr[], int n){
        if(n==arr.length-1){
            return true;
        }

        if(arr[n]<arr[n+1]){
            return strictlySorted(arr, n+1);
        }
        else{
            return false;
        }
    }
    public static void main(String args[]){
        int arr[]={1,2,2,4,5,6};
        System.out.println(strictlySorted(arr, 0));
    }
}
