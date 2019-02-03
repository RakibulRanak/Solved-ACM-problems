#include<stdio.h>
#include<string.h>
int main()
{
    int i=1,j;
    char ara1[11],ara2[11],ara3[11];
    scanf("%s %s",ara1,ara2);
    j=strlen(ara1);
    ara3[0]=ara1[0];
    if(j>1){
    while(ara1[i]<ara2[0]){
        ara3[i]=ara1[i];
        i++;
        if(i==j)
        break;
    }
    }
    ara3[i]=ara2[0];
    ara3[i+1]='\0';
    printf("%s\n",ara3);
    return 0;
}
