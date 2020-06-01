/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg1stcode;

import java.util.Scanner;

/**
 *
 * @author MD. RAKIBUL HASAN
 */
public class SashaandHisTripCF1113A {
    public static void main(String[] args) {
        int n,v;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        v = input.nextInt();
        if(n-1==v)
             System.out.println(v);
        else if(n<=v)
             System.out.println(n-1);
        else{
        int price=v;
        int i=2;
        n=n-v-1;
        while(n!=0)
        {
            price=price+i;
            i++;
            n--;
        }
        System.out.println(price);
        }
    }
    
}
