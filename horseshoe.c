#include<stdio.h>
int main()
{
    int i,j,count=0;
    unsigned long long int ara[4];
    for(i=0;i<4;i++){
        scanf("%llu",&ara[i]);
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
                if(ara[i]==-1){
                    i++;
                }
                else if(ara[i]==ara[j]){
                count++;
                ara[j]=-1;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
