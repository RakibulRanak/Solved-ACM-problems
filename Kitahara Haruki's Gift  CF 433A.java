
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
        int n;
        n=input.nextInt();
        int temp=0,one=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
             temp=input.nextInt();
             if(temp==100)
                one++;
            sum=sum+temp;
        }
        if(sum%200!=0)
            System.out.println("NO");
        
        else
        {   
            sum/=2;
            if(sum%200==0)
                System.out.println("YES");
            else {
                
                if(one%2!=0 ||one==0)
                    System.out.println("NO");
                else
                    System.out.println("YES");
              
            }
             
        }
	}
}
