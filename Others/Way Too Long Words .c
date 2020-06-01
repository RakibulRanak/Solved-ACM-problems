#include<stdio.h>
#include<string.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    char ara[101];
    for(i=0;i<n;i++){
        scanf("%s",ara);
        x=strlen(ara);
        if(x>10){
                printf("%c%d%c\n",ara[0],x-2,ara[x-1]);

        }
        else
            puts(ara);

    }
    return 0;

}
