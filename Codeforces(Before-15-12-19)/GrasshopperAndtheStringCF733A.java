;

import java.util.Scanner;

/**
 *
 * @author IICT (SWE)
 */
public class NewClass {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s=input.nextLine();
        //System.out.println(s.charAt(0));
        int laf=1;
        int temp=1;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U'||s.charAt(i)=='Y')
            {
               if(temp>laf)
               {
                   laf=temp;
                   temp=1;
               }
               temp=1;
            }
            else
                temp++;
        }
        if(temp>laf)
            laf=temp;
        System.out.println(laf);
     
    }
}