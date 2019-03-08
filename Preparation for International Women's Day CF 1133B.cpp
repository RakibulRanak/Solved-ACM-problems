#include<bits/stdc++.h>
using namespace std;
long long int ara[101];
int main()
{
    long long n,k;
    cin>>n>>k;
    long long temp;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        temp=temp%k;
        ara[temp]++;
    }
    long long int ans=0;
    if(k%2==1)
    {
        for(long long i=1; i<=k/2; i++)
        {
            ans+=2*(min(ara[i],ara[k-i]));
        }
    }
    else
    {
        for(int i=1; i<k/2; i++)
        {
            ans+=2*(min(ara[i],ara[k-i]));
        }
        ans+=(ara[k/2]/2)*2;

    }
    ans+=(ara[0]/2)*2;
    if(k==1)
        ans=(n/2)*2;
    cout<<ans<<endl;
    return 0;
}

