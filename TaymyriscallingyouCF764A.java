package pkg1stcode;

/**
 *
 * @author MD. RAKIBUL HASAN
 */
import java.util.Scanner;

public class TaymyriscallingyouCF764 {

    public static void main(String[] args) {
        int n, m, z;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        m = input.nextInt();
        z = input.nextInt();
        int losagu;
        if (m % n == 0) {
            losagu = m;
        } 
        else 
        {
            int lar = Math.max(n, m);
            int small = Math.min(n, m);
            for (int i = lar;; i += lar) {
                if (i % small == 0) {
                    losagu = i;
                    break;
                }
            }
        }
       //  System.out.println(losagu);
     
         int ans = z / losagu;
         System.out.println(ans);

        }

    }
