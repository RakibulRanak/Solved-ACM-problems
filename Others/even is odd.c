#include<stdio.h>
int main()
{
    long long n,k,p;
    scanf("%lld %lld",&n,&k);

        if(n%2==0){
                if(k>n/2){
                    p=(k-(n/2))*2;
                }
                else{
                    p=(2*k)-1;
                }
        }
        else{
            if(k>(n+1)/2){
                    p=(k-((n+1)/2))*2;
            }
            else{
                p=(2*k)-1;
            }
        }
        printf("%lld",p);
    return 0;
}
