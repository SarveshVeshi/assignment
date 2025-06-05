import java.util.Scanner;
import java.util.Random;
public class EP20 {
    public static void main(String[] args) {
        System.out.println("Enter 1.rock\n2.paper\n3.scissor");
        for(int i= 0;i<3;++i)
        {
        System.out.println("Enter your choice:");
        Scanner sc = new Scanner(System.in);
        int user = sc.nextInt();
        Random rm = new Random();
        int computer = rm.nextInt(3)+1;
        switch(user)
        {
            case 1 -> System.out.println("You : Rock");
            case 2 -> System.out.println("You : Paper");
            case 3 -> System.out.println("You : Scissor");
        }
        switch(computer)
        {
            case 1 -> System.out.println("Computer : Rock");
            case 2 -> System.out.println("Computer : Paper");
            case 3 -> System.out.println("Computer : Scissor");
        }
        if(user==computer)
        {
            System.out.println("Draw!");
        }
        else if ((user==1&&computer==2)||(user==2&&computer==3)||(user==3&&computer==2))
        {
            System.out.println("computer won!");
        }
        else if((user==1&&computer==3)||(user==2&&computer==1)||(user==3&&computer==1))
        {
            System.out.println("YOU won!");
        }
        }
        // combining all the possible conditions .
        // else if()
        // {
        //     System.out.println("computer won!");
        // }
        // else if
        // {
        //     System.out.println("You won!");
        // }
        // else if
        // {
        //     System.out.println("You won!");
        // }
        // else if
        // {
        //     System.out.println("computer won!");
        // }
    }
}
