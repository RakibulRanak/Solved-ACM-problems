#include<stdio.h>
int main()
{
   int a,b,i,x;
   scanf("%d",&x);
   for(i=1;i<=x;i++){
    scanf("%d %d",&a,&b);
    if(a>b){
        printf(">\n");
    }
    else if(a<b){
        printf("<\n");
    }
    else{
        printf("=\n");
    }
   }
   return 0;

}
