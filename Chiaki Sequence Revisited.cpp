#include<bits/stdc++.h>
using namespace std;
#define M 1000000007

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        int ara[n];
        int ans[n];
        ara[0]=1;
        ans[0]=1;
        ans[1]=2;
        ara[1]=1;
        for(int i=2;i<n;i++)
        {
            ara[i]=ara[i-ara[i-1]]+ara[i-1-ara[i-2]];
            cout<<i+1<<" "<<i-ara[i-1]+1<<" "<<ara[i-ara[i-1]]<<" "<<i-1-ara[i-2]+1<<" "<<ara[i-1-ara[i-2]]<<endl;
            ans[i]=(ans[i-1]%M+ara[i])%M;
            cout<<ans[i]<<endl;
        }

        cout<<ans[n-1]<<" "<<ara[n-1]<<endl;
        //cout
    }
}
