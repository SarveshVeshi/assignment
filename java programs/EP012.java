/* 
1. What will the result of the following expression 
float a = 7/4*9/2
-> ans : 1.75*9/2
         1*9/2
         9/2
         4.5
         4
         
2. Write a java program to encrypt a grade by adding 8 to it decrypt it ot show the correct grade .
-> ans : 

3. Use comparison operators to find out whether a given number is greater than the user entered or not .
-> ans : 
4.Write  the following expression in a java program :
    v^2 - u^2
    ---------  -> ((v*v) - (u*u))%295
    295
 -> 
5. Find the value of the following expression :
    int x= 7;
    int a = 7.49 / 7 + 35 / 7 
    value of a ?
->   = 1.7 + 5
     = 1 + 5
     = 6
*/
import java.util.Scanner;
public class EP012 {
    public static void main(String[] args) {
       
        //1.
        // float a = (float)7/4*9/2;
        // or 
        // float a = 7/4.0f * 9/2.0f;
        // System.out.println(a);

        // 2.
        // Scanner in = new Scanner(System.in);
        // System.out.println("Enter the grade :");
        // char array[] = new char [2];
        // String s = in.next();
        // array[0] = s.charAt(0);
        // array[1] = s.charAt(1);
        // for(int i = 0;i<2;++i)
        //     {
        //         array[i] += (char)8;
        //     }
        // System.out.println("Encrypted value :"+String.valueOf(array));
        // for(int i = 0;i<2;++i)
        //     {
        //         array[i] -= (char)8;
        //      }
        // System.out.println("Decrypted value :"+String.valueOf(array));
        // in.close();

        // 3.
        // Scanner in = new Scanner(System.in);
        // System.out.println("Enter a number :");
        // int value = in.nextInt();
        // int target = 100;
        // if (value >target )
        //     {
        //         System.out.println("your number is greater ");
        //     }
        // else 
        //     {
        //         System.out.println("your number is smaller ");
        //     }

        // 4.
        // int v = 15;
        // int u = 5;
        // double  ans ;
        // ans = (double) ((v*v) - (u*u))/295 ;
        // System.out.println("The answer is :"+ans);

        // 6.
    //     int x= 7;
    //     int a = (int)7.49/7 + 35/7; 
    //     System.out.println(a);
    }
}
