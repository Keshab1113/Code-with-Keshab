import java.util.*;
class opp1 {
    public static void fib(int a,int b,int n){
        if(n==0){
            return;
        }
        int fibo = a+b;
        System.out.println(fibo);
        fib(b,fibo,n-1);
    }
    public static void main(String args[]){
        System.out.println(0);
        System.out.println(1);
        fib(0, 1, 6);
    }
}
