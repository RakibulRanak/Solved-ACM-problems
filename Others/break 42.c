
#include<stdio.h>
int main()
{
    int ara[100],i,j,k;
    for(i=0;i<100;i++){
        scanf("%d",&ara[i]);
        if (ara[i]==42){
            j=i;
            break;
        }
    }
    for(k=0;k<j;k++){
        printf("%d\n",ara[k]);
    }
return 0;
}
