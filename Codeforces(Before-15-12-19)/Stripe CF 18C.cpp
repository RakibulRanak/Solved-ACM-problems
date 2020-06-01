#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x;
    int sum[n];
    int t=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        t+=x;
        sum[i]=t;
    }
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(sum[i]==t-sum[i])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
