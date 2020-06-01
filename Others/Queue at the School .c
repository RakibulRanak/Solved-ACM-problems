#include<stdio.h>
int main()
{
    int i,x,j,n,t;
    scanf("%d %d",&n,&t);
    char ara[n];
    scanf("%s",ara);
    char temp;
    for(j=0; j<t; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(ara[i]=='B'&&ara[i+1]=='G')
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
                i++;
            }
        }
    }
    puts(ara);
    return 0;

}
