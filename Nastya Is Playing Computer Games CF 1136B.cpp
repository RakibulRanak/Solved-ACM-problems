#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ans=0;
    if(k==1)
    {
       ans= n*2+n;
    }
    else if(k<=n/2)
    {
        ans=(k-1)*2+(n-k);
        ans+=n*2+1;
    }
    else
    {
        ans=(n-k)*2+(k-1);
        ans+=n*2+1;
    }
    cout<<ans<<endl;
}
