#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x,ans=0;
    char ara[101];
    scanf("%s",ara);
    x=strlen(ara);
    for(i=0;i<x;i++){
        if(ara[i]=='H'||ara[i]=='Q'||ara[i]=='9'||ara[i]=='+'){
            ans=1;
            break;
        }
    }
    if(ans==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
