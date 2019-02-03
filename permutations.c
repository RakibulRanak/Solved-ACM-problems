#include<stdio.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        ara[i]=i+1;
    }
    if(n%2==0){
        for(i=0;i<n;i=i+2){
            temp=ara[i];
            ara[i]=ara[i+1];
            ara[i+1]=temp;
            printf("%d %d ",ara[i],ara[i+1]);
        }

    }
    else
        printf("%d",-1);
    return 0;
}
