#include<stdio.h>
int main()
{
    int n,i,j,count=0,_1st,_2nd,temp,temp1,ans;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(ara[i]>=ara[j]){
                    count++;
                    if(count==n)
                        goto line;
                }
            }
            count=0;

    }
    line :_1st=i;
    temp=ara[0];
    ara[0]=ara[i];
    for(i=1;i<=_1st;i++){
        temp1=ara[i];
        ara[i]=temp;
        temp=temp1;
    }
    count=0;
    for(i=n-1;i>=0;i--){
            for(j=n-1;j>=0;j--){
                if(ara[i]<=ara[j]){
                    count++;
                    if(count==n)
                        goto line2;
                }
            }
            count=0;

    }
    line2 :_2nd=(n-1)-i;
    ans=_1st+_2nd;
    printf("%d\n",ans);
    return 0;


}
