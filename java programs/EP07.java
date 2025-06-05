// WAP in java , to add sum of three numbers .
// import java.util.Scanner;
// public class EP07{
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.println("Enter the values of the three numbers :");
//         int a = in.nextInt();
//         int b = in.nextInt();
//         int c = in.nextInt();
//         int d = a + b + c ;
//         System.out.println("The Sum is :"+d);
//         in.close();
//     }
// }

// WAP in java ,to calculate their CGPA from their given marks in three subjects .
// import java.util.Scanner;
// public class EP07 {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.println("Enter the values of three subjects :");
//         int a[] = new int [3];
//         for (int  i= 0; i < 3; ++i) {
//             a[i]= in.nextInt();
//         }
//         float CGPA=0;
//         for (int  i= 0; i < 3; ++i) {
//             CGPA = CGPA + a[i];
//         }
//         CGPA = (CGPA/300)*10;
//         System.out.println("your CGPA is "+CGPA);
//         in.close();
//     }
// }

// WAP in java to take his/her name and print "hello <name>, have a good day"
// import java.util.Scanner;
// public class EP07 {
//     public static void main(String[] args) {
//         Scanner in = new Scanner (System.in);
//         System.out.println("Enter your name.");
//         String S = in.nextLine();
//         System.out.println("Hello "+S+", have a good day !");
//         in.close();
//     }
// }

// WAP to convert kilometer into miles 
// import java.util.Scanner;
// public class EP07 {
//     public static void main(String[] args) {
//         Scanner in = new Scanner (System.in);
//         System.out.println("Enter the distance in kilometer :");
//         double km = in.nextFloat();
//         double m = km * 0.62137119 ;
//         System.out.println("miles :"+m);
//     }
// }

// WAP in java , to detect whether the number entered by the user is integer or not 
import java.util.Scanner;
public class EP07 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the value :");
        System.out.println(in.hasNextInt());
    }
}