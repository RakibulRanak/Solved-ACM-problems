#include<stdio.h>
int main()
{
    int a,b,i,j,count=1;
    scanf("%d %d",&a,&b);
    if(a==2&&b==3)
    {
        printf("YES\n");
        goto line2;
    }
     if(a==2&&b!=3)
    {
        printf("NO\n");
        goto line2;
    }


    else
    {
        for(i=a+1; i<=b; i++)
        {
            for(j=2; j<=i/2; j++)
            {
                if(i%j!=0)
                 {
                    count++;
                    if(count==i/2)
                    goto line;
                }
            }
            count=1;
        }
    }
line:
    if(i==b)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
line2:
    ;
    return 0;
}
