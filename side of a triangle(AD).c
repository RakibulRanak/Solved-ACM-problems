#include<stdio.h>
int main()
{
    int a,i;float ab,ac,bc,ratio;
    float x;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
            scanf("%f %f %f %f",&ab,&ac,&bc,&ratio);
            x=ab/sqrt(1+(1/ratio));
            printf("Case %d: %f\n",i,x);

    }



   return 0;


}
