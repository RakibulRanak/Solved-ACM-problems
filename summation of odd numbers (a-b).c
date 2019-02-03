#include<stdio.h>
int main()
{
   int a,b,x,sum,i,j,y;
   scanf("%d",&x);
   for(i=1;i<=x;i++){
    scanf("%d/n",&a);
    scanf("%d/n",&b);
    if(a%2==0){
                sum =0;
        for(j=a+1;j<=b;j=j+2){
                y=j;
                sum=sum+y;
                y=sum;
        }
        printf("Case %d: %d\n",i,sum);
    }
    else if(a%2==1){
                sum =0;
        for(j=a;j<=b;j=j+2){
                y=j;
                sum=sum+y;
                y=sum;
        }
        printf("Case %d: %d\n",i,sum);
    }
}
return 0;
}
