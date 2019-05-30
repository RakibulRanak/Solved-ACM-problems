#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ara[n];
    for(int i=0; i<n; i++)
        cin>>ara[i];
    int ans=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((ara[i]+ara[j])%k==0)
                ans++;
        }
    }
    cout<<ans<<endl;
}
