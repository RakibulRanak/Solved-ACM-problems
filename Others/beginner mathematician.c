#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x;
    char temp;
    char ara[101];
    scanf("%s",ara);
    x=strlen(ara);
    for(i=0; i<x-2; i=i+2)
    {
        for(j=i+2; j<x; j=j+2)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    puts(ara);
    return 0;
}
