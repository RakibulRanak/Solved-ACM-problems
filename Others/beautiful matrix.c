#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,ans;
    int ara[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&ara[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(ara[i][j]==1){
                i=i+1;
                j=j+1;
                goto line;
            }
        }
    }
    line:i=abs(i-3);
    j=abs(j-3);
    ans=i+j;
    printf("%d\n",ans);
    return 0;
}
