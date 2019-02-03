#include<stdio.h>
int main()
{
    int a,i,b,c,d,j;
    scanf("%d",&a);
    if(a>=0 && a<=125){
            int ara[2*a];
            for(i=1;i<=2*a;i++){
                scanf("%d %d",&ara[i-1],&ara[i]);

                i++;
                }


            for(i=0,j=1;i<2*a,j<=a;i++,j++){
                if(ara[i]>0&&ara[i+1]>0&&ara[i]<11&&ara[i+1<11]){
                         printf("Case %d: %d\n",j,ara[i]+ara[i+1]);


                }
                i++;
                }
        }


    return 0;
}
