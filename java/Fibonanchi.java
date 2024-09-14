import java.util.*;
class opp1 {
    public static void averageNumber(int n){
        int prev1 = 0, prev2=1;
        for(int i=0;i<n-2;i++){
            int ans = prev1+prev2;
            System.out.print(ans );
            System.out.print(" " );
            prev1=prev2;
            prev2=ans;
        }
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a= sc.nextInt();
        System.out.print(0 );
        System.out.print(" ");
        System.out.print(1);
        System.out.print(" ");
        averageNumber(a);
    }
}
