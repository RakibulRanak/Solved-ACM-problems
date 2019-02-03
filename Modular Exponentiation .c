#include<stdio.h>
#include<math.h>
int main()
{
    long n,m,x;
    scanf("%ld %ld",&n,&m);
    if(/*2>(double)pow(m,1./n)*/pow(2,n)>m)
        printf("%ld",m);
    /*else if(2==pow(m,1./n))
        printf("0\n");*/

    else{
            x=pow(2,n);
            printf("%ld\n",m%x);
        }

    printf("(%lf)",(double)pow(100,1./3));
        return 0;
}
