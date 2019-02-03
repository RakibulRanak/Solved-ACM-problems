#include<stdio.h>
int main()
{
    int i,j,n,count=0,num=0;
    scanf("%d",&n);
    getchar();
    char ara[n+1];
    gets(ara);

    for(i=0,j=1;i<n-1,j<n;i++,j++){
           line: if(ara[i]==ara[j]&&ara[i]!='*'){
                count++;
                ara[j]='*';
                j++;
                goto line;
            }
        j=i+1;
        num=num+count;
        count=0;
    }

    printf("%d\n",num);
    num=0;
    count=0;
    return 0;

}
