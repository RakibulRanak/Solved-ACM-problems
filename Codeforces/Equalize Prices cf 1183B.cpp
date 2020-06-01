#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        int ans;
        long long ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        long long hi;
        long long max=ara[0]+k;
        hi=max+k;
        if(ara[n-1]<=hi)
            ans=max;
        else
            ans=-1;
        cout<<ans<<endl;

    }
    return 0;
}
