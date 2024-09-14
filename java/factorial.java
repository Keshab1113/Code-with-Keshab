import java.util.*;
class opp1 {
    public static int fact(int n){
        if(n==1 || n==0){
            return 1;
        }
        int fact1= fact(n-1);
        int factu = n * fact1;
        return factu;
        
    }
    public static void main(String args[]){
        int ans = fact(5);
        System.out.println(ans);
    }
}
