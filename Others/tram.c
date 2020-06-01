#include<stdio.h>
int main()
{
    int i,j,n,temp=0;
    scanf("%d",&n);
    int ara1[2*n];
    int ara2[n];
    for(i=0;i<2*n;i=i+2){
        scanf("%d %d",&ara1[i],&ara1[i+1]);
    }
    for(i=0;i<n;i++){
        ara2[i]=ara1[2*i+1]-ara1[2*i]+temp;
        temp=ara2[i];
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ara2[i]<ara2[j]){
                temp=ara2[i];
                ara2[i]=ara2[j];
                ara2[j]=temp;
            }
        }
    }
    printf("%d\n",ara2[0]);
    return 0;

}
