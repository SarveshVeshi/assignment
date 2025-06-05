// Convert the marks of a student into percentage for 5 subject each of 100 marks .
import java.util.Scanner;
public class EP06 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a[] = new int[5] ;
        System.out.println("Enter the maximum marks you are obtain in the given subjects:");
        Scanner out  = new Scanner(System.in);
        int x = out.nextInt();
        System.out.println("Enter the marks of all five  subjects :");
        for(int i=0;i<5;++i)
            {
                a[i] = in.nextInt();
            }
        float percentage=0;
        for(int i=0;i<5;++i)
            {
                percentage = percentage + a[i];   
            }
        percentage = (percentage/(x*5))*100; 
        System.out.println("The percentage of student is :"+percentage);
        in.close();
        out.close();
    }
}