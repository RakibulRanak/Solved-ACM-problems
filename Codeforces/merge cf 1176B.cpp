#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,t;
        int ara[3]={0,0,0};
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            ara[t%3]++;
        }
        int ans=0;
        int p;
        ans+=ara[0];
        p=min(ara[1],ara[2]);
        ans+=p;
        if(ara[1]==p)
        {
            ans+= (ara[2]-p)/3;
        }
        else
             ans+= (ara[1]-p)/3;
        cout<<ans<<endl;

    }
    return 0;
}
