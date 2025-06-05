public class EP14 {
    public static void main(String[] args) {
        // String declaration :
        String original = "Sarvesh";
        String firstcopy = new String("Didi");
        // String Methods :
        
        // 1.length : return a number which can be byte,short,int,long
        // float but not boolean or char ok. 
        byte length = (byte ) original.length();
        System.out.println(length);
        //or 
        System.out.println(original.length());

        //2.toLowerCase : generate a copy of the original string with
        // lower case.
        System.out.println(firstcopy.toLowerCase());
        
        //3.toUpperCase : generate a copy of the original string with
        // Upper case.
        System.out.println(firstcopy.toUpperCase());

        // 4.Trim: helps to remove the spaces .
        String untrimmed = "  ayan  ";
        System.out.println(untrimmed.trim());

        //5. substring : To print the string from a specific index no.
        System.out.println(original.substring(3));
        // it can be take only starting index or both starting and ending 
        // but always the starting index will be included not the ending one 
        // means it will be excluded(ending index)
        System.out.println(firstcopy.substring(2,4));
        
        // 6.startsWith : helps to find whether the string starts with a 
        // particular value ! (its case sensitive )
        System.out.println(original.startsWith("Sar"));
        System.out.println(original.startsWith("sar"));

        // 7.replace(): it helps generate a new string which replaces 
        // a particular character or string from the given string .
        System.out.println(original.replace('h','i'));
        System.out.println(original.replace("sh","shi"));
        // remember we cannot replace a character --> String means like 
        // replace(original.replace('h',"hi")); not possible 

        // 8. startsWith(): it helps to find whether the string starts with the
        // following  string or character . it return true if yes and false if no .
        System.out.println(original.startsWith("S"));

        //9. endsWith(): it helps to find whether the given string ends with the 
        // following string or character . it returns true if yes and false if no.
        System.out.println(original.endsWith("h"));

        //10.charAt (): [we provide index value in the arguments ]this helps to find 
        //the character at the given index .
        System.out.println(original.charAt(6));

        //11. indexOf():[we provide character or string in the argument ] this helps
        // to find the index number on the the string or character found first .
        System.out.println(original.indexOf('S'));
        System.out.println(original.indexOf("ar"));
        
        //12. same as the above just the different is that we also provide the starting 
        // index from where the search should start .
        System.out.println(firstcopy.indexOf("i",2));

        //13.lastIndexOf():[ we provide character or string in the argument ] this helps
        // to find the index number from where the string or character is found last 
        //{ remember :  
        //1. the indexOf(): starts scanning from left to right .
        //2. the lastIndexOf(): starts scanning from right to left .}
        System.out.println(firstcopy.lastIndexOf('i'));

        //14. again same as above we can also provide the index from where it should start
        // scanning ( remember from right to left this function scans ).
        System.out.println(firstcopy.lastIndexOf("i",2));

        //15.equals(): this helps to know whether the string are equal for not .
        // returns true if yes and false if no.
        //{remember : its case sensitive .}
        System.out.println(original.equals("Sarvesh"));

        //16.equalsIgnoreCase(): this is same as above but it is not case sensitive.
        System.out.println(original.equalsIgnoreCase("SarvEsh"));

        // thanks , you are the best .
        // Hardwork beats talent . ~ cr7
    }

}