import java.util.Scanner;
public class EP15 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a string :");
        String a = in.nextLine();

        //1.WAP in java to convert a string into lowercase.
            // System.out.println(a.toLowerCase());
            
        //2. WAP in java to replace spaces with underscores.
            // System.out.println(a.replace(" ","_"));    
            
        /*3.WAP in java to fill in a letter template which 
          looks like this :
            letter = "Dear <!name>, Thanks a lot"
            Replace <!name> with a string (some name) */
            // System.out.println(a.replace("<!name>","Sarvesh"));
        
        //4. WAP in java to detect double and trip spaces in a string .
            // System.out.println(a.indexOf("  "));   
            // System.out.println(a.indexOf("   ")); 
            
        //5.WAP in java to format the following sentence using escape sequence.
        // " date,subject ,dear parents , Your son is suspended "
            // System.out.println("Date,\nsubject,\nDear Parents,\nYour son is supended");
    }
}

