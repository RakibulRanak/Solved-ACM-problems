
#include<bits/stdc++.h>
using namespace std;
int pow_(int b,int p)
{
    int ans=1;
    for(int i=0; i<p; i++)
    {
        ans*=b;
    }
    return ans;
}

int main()
{
    int n,M,h;
    cin>>n>>M>>h;
    int ara[51];
    //memset(ara,0,51);
    for(int i=0;i<51;i++)
        ara[i]=M;
   // cout<<ara[5]<<endl;
    int l,r,v;
    for(int i=0;i<h;i++)
    {
        cin>>l>>r>>v;
        l--;
        r--;
        for(int i=l;i<=r;i++)
        {
            if(ara[i]>v)
                ara[i]=v;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=pow_(ara[i],2);
    }

   cout<<ans<<endl;
    return 0;
}
