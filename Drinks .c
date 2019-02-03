#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    double ara[n],sum=0,ans;
    for(i=0;i<n;i++){
        scanf("%lf",&ara[i]);
        ara[i]=ara[i]/100;
    }
    for(i=0;i<n;i++){
        sum=sum+ara[i];
    }
    ans=(sum/n)*100;
    printf("%lf\n",ans);
    return 0;
}
