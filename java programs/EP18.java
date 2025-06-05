import java.util.Scanner;
public class EP18 {
    public static void main(String[] args) {
        //1.
        // int a = 10;
        // if(a=11)
        // {
        //     System.out.println("i am 11 ");
        // }
        // else
        // {
        //     System.out.println("i am not 11");
        // }

    //     2.
    //    Scanner sc1 = new Scanner(System.in);
    //    Scanner sc2 = new Scanner(System.in);
    //    Scanner sc3 = new Scanner(System.in);

    //    System.out.println("Enter the marks of first subject : ");
    //    int m1 = sc1.nextInt();
    //    float per1 = (((float)m1/120)*100);
    //    System.out.println("Enter the marks of first subject : ");
    //    int m2 = sc2.nextInt();
    //    float per2 = (((float)m2/120)*100);
    //    System.out.println("Enter the marks of first subject : ");
    //    int m3 = sc3.nextInt();
    //    float per3 = (((float)m3/120)*100);


    //    float total_per = ((per1+per2+per3)/3);

    //    if(((per1>=33)&&(per2>=33)&&(per3>=33)) && (total_per>=40))
    //    {
    //     System.out.println("You are pass!");
    //    }
    //    else
    //    {
    //      System.out.println("You are fail");
    //    }
    //    sc1.close();
    //    sc2.close();
    //    sc3.close();

    //3.
    // System.out.println("Enter your annual salary :");
    // Scanner sc = new Scanner(System.in);
    // float salary = sc.nextInt();

    // if(salary<=250000)
    // {
    //     System.out.println("you have to pay no income tax.");
    // }
    // else if (salary>250000&&salary<=500000)
    // {
    //     float s = salary;
    //     s = s - 250000;
    //     s = (5*s)/100;
    //     System.out.println("you have to pay :"+s);
    // }
    // else if(salary>500000&&salary<=1000000)
    // {
    //     float s = salary;
    //     s = s - 500000;
    //     s = (20*s)/100;
    //     s += 12500;
    //     System.out.println("you have to pay :"+s);
        
    // }
    // else
    // {
    //     float s = salary;
    //     s = s-1000000;
    //     s = (30*s)/100;
    //     s = s + 12500 +100000;
    //     System.out.println("you have to pay :"+s);
    // }
    
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the day number :");
    int day = sc.nextInt();

    switch(day)
    {
        case 1 : System.out.println("Monday");
                break;
        case 2 : System.out.println("Tuesday");
                break;
        case 3 : System.out.println("Wednesday");
                break;
        case 4 : System.out.println("Thursday");
                break;
        case 5 : System.out.println("Friday");
                break;
        case 6 : System.out.println("Saturday");
                break;
        case 7 : System.out.println("Sunday");
                break;
        default : 
                System.out.println("Erro number is not in the range 1-7");
    }

    // 5.
    // to find the type of website from the url.
    
    // Scanner sc = new Scanner(System.in);
    // System.out.println("Enter the website url.");
    // String original = sc.next();
    // String url = original.substring(original.length()-4);
    // String url1 = original.substring(original.length()-3);
    // if(url.equals(".com"))
    // {
    //     System.out.println("your website is a commerical one .");
    // }
    // else if (url.equals(".org"))
    // {
    //     System.out.println("Your websites is of an organizational.");
    // }
    // else if(url1.equals(".in"))
    // {              
    //     System.out.println("Your website is an indian website .");
    // }
    // else
    // {
    //     System.out.println("Invalid input .");
    // }
    }
}
