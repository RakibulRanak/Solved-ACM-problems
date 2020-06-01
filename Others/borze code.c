#include<stdio.h>
#include<string.h>
int main()
{
    int i,x;
    char ara[201];
    scanf("%s",ara);
    x=strlen(ara);
    for(i=0;i<x;i++){
        if(ara[i]=='.')
            printf("0");
        else if(ara[i]=='-'){
            if(ara[i+1]=='.')
                printf("1");
            else
                printf("2");
            i++;
        }
    }
}
