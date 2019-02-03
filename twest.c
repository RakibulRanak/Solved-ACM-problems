#include<stdio.h>
int main()
{
    int n,a,b,ans,i;

    scanf("%d %d %d",&n,&a,&b);

    for(i=1;i<=a&&i<=b;i++){
        if(a/i+b/i>=n)
                ans=i;
    }

    printf("%d\n",ans);
    return 0;
}
