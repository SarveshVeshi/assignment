import java.util.Scanner;
import static java.lang.System.out;
public class EP16 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // WAP using conditional operators to identify whether u can drive
        // or not .
        out.println("Enter age bro !");
        int age = in.nextInt();
        if(age>=18)
          {
            out.println("bro u can drive!");
          }
        else
          {
            out.printf("bro u can't drive!");
          }
          in.close();
    }
}
