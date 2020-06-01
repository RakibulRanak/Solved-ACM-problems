#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long ara[10000002];
int main()
{
    long long n;
    cin>>n;

    ara[1]=0;
    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    long long p=3;
    for(int i=2;i<=n;i++)
    {
        ara[i]=(p%mod-ara[i-1]%mod+mod)%mod;
        p=(p*3ll)%mod;
    }
    cout<<ara[n]<<endl;
    return 0;

}
