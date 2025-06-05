public class EP17 {
    public static void main(String[] args) {
        System.out.println("for logical AND");
        boolean a = true ;
        boolean b = false;
        if(a&&b)
        {
            System.out.println("true");
        }
        else
        {
            System.out.println("false");
        }

        System.out.println("for logical OR");
        boolean A = true ;
        boolean B = false;
        if(A||B)
        {
            System.out.println("true");
        }
        else
        {
            System.out.println("false");
        }

        System.out.println("Logical Not ");
        System.out.println(" Not of (a) ="+(!a));
        System.out.println(" Not of (b) ="+(!b));
        
    }
}
