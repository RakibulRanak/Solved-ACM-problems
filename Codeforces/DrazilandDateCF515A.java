
import java.util.Scanner;

/**
 *
 * @author IICT (SWE)
 */
public class NewClass {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long x,y,len;
        x=input.nextInt();
        y=input.nextInt();
        len=input.nextInt();
        x=Math.abs(x);
        y=Math.abs(y);
        if(len<x+y)
            System.out.println("No");
        else if(x+y==len)
            System.out.println("Yes");
        else
        {
            long temp=x+y-len;
            if(temp%2==0)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
     
    }
}