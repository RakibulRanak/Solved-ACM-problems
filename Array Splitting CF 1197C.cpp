#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int ara[n];
    int ara1[n-1];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    for(int i=1;i<n;i++)
    {
        ara1[i-1]=ara[i]-ara[i-1];
    }
    sort(ara1,ara1+n-1);
    long long ans=0;
    for(int i=0;i<n-k;i++)
    {
        ans+=ara1[i];
    }
    cout<<ans<<endl;
    return 0;
}


