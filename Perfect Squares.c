#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,temp1,temp2;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ara[i]>ara[j]){
                temp1=ara[i];
                ara[i]=ara[j];
                ara[j]=temp1;
            }
        }
    }
    for(i=n-1;i>=0;i--){
        if(ara[i]<0){
            printf("%d\n",ara[i]);
            break;
        }
        temp1=sqrt(ara[i]);
        temp2=temp1*temp1;
        if(temp2!=ara[i]){
            printf("%d\n",ara[i]);
            break;
        }


    }
    return 0;

}
