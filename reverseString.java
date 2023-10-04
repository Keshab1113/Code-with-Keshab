import java.util.*;
class opp1 {
    public static void reverseString(String name, int n){
        if(n==0){
            System.out.print(name.charAt(n));
            return;
        }
        System.out.print(name.charAt(n));
        reverseString(name, n-1);
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int n= name.length()-1;
        reverseString(name, n);
    }
}
