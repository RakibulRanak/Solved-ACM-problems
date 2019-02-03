#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,b,j;
    scanf("%d",&a);
    int ara[a];
    for(i=0;i<a;i++){
        scanf("%d",&ara[i]);
        ara[i]=(((((ara[i]*567)/9)+7492)*235)/47)-498;
    }
    for(i=0,j=0;i<a,j<a;i++,j++){
        b=ara[i]/10;
        ara[j]=b%10;
    }
    for(i=0;i<a;i++){
        printf("%d\n",abs(ara[i]));
    }



    return 0;


}
