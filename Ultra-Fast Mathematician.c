#include<stdio.h>
#include<string.h>
int main()
{
    int i,x;
    char ara1[101];
    char ara2[101];
    scanf("%s %s",ara1,ara2);
    x=strlen(ara1);
    for(i=0;i<x;i++){
        if(ara1[i]==ara2[i])
            printf("0");
        else
            printf("1");
    }
    return 0;
}
