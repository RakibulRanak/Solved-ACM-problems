#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d%d",&a,&b,&c);
    for(;a>=0;a--){
    if(b>=2*a && c>=4*a){

        printf("%d\n",7*a);
        break;
    }
    }



   return 0;

}
