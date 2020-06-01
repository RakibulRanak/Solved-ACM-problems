#include<stdio.h>
int main()
{
    int ara[4],a=-1;
    scanf("%d %d %d %d",&ara[0],&ara[1],&ara[2],&ara[3]);
    if(ara[3]>ara[2]*2||ara[2]>ara[3]*2||ara[3]>=ara[1])
    {
        printf("%d\n",a);
    }
    else if(ara[2]>=ara[3])
    {
        printf("%d\n%d\n%d\n",ara[0]*2,ara[1]*2,ara[2]);

    }
    else
    {
        printf("%d\n%d\n%d\n",2*ara[0],2*ara[1],2*ara[2]);
    }

    return 0;
}

