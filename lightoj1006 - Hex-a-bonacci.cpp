#include<bits/stdc++.h>
using namespace std;
long long int ara[100005];
long long int fn( long long int n )
{
    if( n <6 )
        return ara[n];
    else if(ara[n]!=0)
        return ara[n];
    else
    {


        ara[n]=( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )%10000007;
       // ara[n]=ara[n]%10000007;
        return ara[n];
    }
}

int main()
{
    long long int n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &ara[0], &ara[1], &ara[2], &ara[3], &ara[4], &ara[5], &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
        memset(ara,0,100005);
    }
    return 0;
}
