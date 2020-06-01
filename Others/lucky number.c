#include<stdio.h>
#include<string.h>
int main()
{
    char ara[20],ln,i,count=0;
    scanf("%s",ara);
    ln=strlen(ara);
    for(i=0;i<ln;i++){
        if(ara[i]=='4'||ara[i]=='7')
            count++;
    }
    if(count==4||count==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;


}
