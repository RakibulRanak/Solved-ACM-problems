#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,count=0,x;
    char ara[101];
    scanf("%s",ara);
    x=strlen(ara);
    for(i=0;i<x;i++){
        if(isupper(ara[i])){
            count++;
        }
    }
    printf("%d\n",count);
    if(count>(int)(x/2)){
        for(i=0;i<x;i++)
            ara[i]=toupper(ara[i]);
    }
    else{
         for(i=0;i<x;i++)
            ara[i]=tolower(ara[i]);
    }
    puts(ara);
    return 0;
}
