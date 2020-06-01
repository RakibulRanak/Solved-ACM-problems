#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ara[i]>ara[j]){
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    if(n%2==0){
        printf("%d",ara[(n-1)/2]);

    }
    else
        printf("%d",ara[n/2]);
    return 0;
}
