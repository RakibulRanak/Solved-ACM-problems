#include<stdio.h>
int main()
{
    int i,j,n,count1=0,count2=0,ans;
    scanf("%d",&n);
    int ara1[n],ara2[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&ara1[i],&ara2[i]);
    }
    for(i=0;i<n;i++){
        if(ara1[i]==0)
            count1++;
    }
    if(count1>n/2)
        count1=n-count1;
    for(i=0;i<n;i++){
        if(ara2[i]==0)
            count2++;
    }
    if(count2>n/2)
        count2=n-count2;
    ans=count1+count2;
    printf("%d\n",ans);
    return 0;

}
