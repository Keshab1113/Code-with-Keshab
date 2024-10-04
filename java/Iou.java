import java.util.Scanner;
public class Iou {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please Enter a Number: ");
        long a = sc.nextLong();
        System.out.println("Please enter second number: ");
        long b = sc.nextLong();
        long sum = a+b;
        System.out.println(sum);
    }
}