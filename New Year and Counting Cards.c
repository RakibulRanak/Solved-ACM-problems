#include<stdio.h>
#include<string.h>
int main()
{
    int i,ln,count=0;
    char ara[51];
    scanf("%s",ara);
    ln=strlen(ara);
    for(i=0;i<ln;i++){
        if(ara[i]=='a'||ara[i]=='e'||ara[i]=='i'||ara[i]=='o'||ara[i]=='u'||ara[i]=='1'||ara[i]=='3'||ara[i]=='5'||ara[i]=='7'||ara[i]=='9'){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
