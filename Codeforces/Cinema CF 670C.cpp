#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p,t;
    cin>>p;
    map<int,int>m;
    for(int i=0;i<p;i++)
    {
        cin>>t;
        m[t]++;
    }
    int M;
    cin>>M;
    int audio[M];
    int sub[M];
    for(int i=0;i<M;i++)
        cin>>audio[i];
    for(int i=0;i<M;i++)
        cin>>sub[i];
    int maxa=0,maxs=0,ans=1;
    for(int i=0;i<M;i++)
    {
        if(m[audio[i]]>maxa)
        {
            maxa=m[audio[i]];
            maxs=m[sub[i]];
            ans=i+1;
        }
        else if(m[audio[i]]==maxa)
        {
            if(m[sub[i]]>maxs){
                maxs=m[sub[i]];
                ans=i+1;
            }

        }
    }
    cout<<ans<<endl;
    return 0;
}
