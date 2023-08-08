import java.util.*;
class FirstClass {
    public static void main(String args[]){
        System.out.println("Enter your name");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine(); // When you use next(exchange of nextLine) then you can see only one word.
        System.out.println(name);
    }
}
