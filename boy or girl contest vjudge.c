#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x,num,count;
    char ara[101];
    gets(ara);
    x=strlen(ara);
    for(i=0; i<x-1; i++)
    {
        count=0;
        for(j=i+1; j<x; j++)
        {
            if(ara[i]=='&')
                goto here;
            else  if(ara[i]==ara[j])
            {
                count++;
                ara[j]='&';
            }

        }
        num=num+count;
here:
        ;
    }
    num=x-(num-54);
    if(num%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
        printf("IGNORE HIM!");

    return 0;
}
