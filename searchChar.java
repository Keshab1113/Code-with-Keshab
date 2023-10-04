import java.util.*;
class opp1 {
    public static int first = -1;
    public static int last = -1;
    public static void countNumber(String name, char c, int n){
        if (n == name.length()){
            System.out.println(first);
            System.out.println(last);
            return;
        }
        char gud= name.charAt(n);
        if (gud== c){
            if (first == -1){
                first=n;
            }
            else{
                last =n;
            }
        }
        countNumber(name, c, n+1);
    }
    public static void main(String args[]){
        String name = "AAAAA";
        countNumber(name, 'A',0);
    }
}
