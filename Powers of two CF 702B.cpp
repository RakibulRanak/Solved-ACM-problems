#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<long long,int>m;
    long long ans=1;
    int n;
    cin>>n;
    long long ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        m[ara[i]]++;
    }
    ans=0;
    for(int i=0;i<n;i++)
    {
        m[ara[i]]--;
        for(int j=0;j<=32;j++)
        {
            ans+=m[(1<<j)-ara[i]];
        }
    }

    cout<<ans<<endl;
}
