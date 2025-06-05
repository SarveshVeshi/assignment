// to use string class to define , scan and display .
import java.util.Scanner;
public class EP13 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Scanner In = new Scanner(System.in);
        String a = new String("Sarvesh");
        String b = "Athrva";
        System.out.println("Enter the string for c :");
        String c = in.next();
        System.out.println("Enter the string for d :");
        String d = In.nextLine();

        System.out.print("String a :"+a+"\n");
        System.out.println("string b :"+b);
        System.out.printf("String c : %s\n",c);
        System.out.format("String d : %s\n",d);
        
    }
}