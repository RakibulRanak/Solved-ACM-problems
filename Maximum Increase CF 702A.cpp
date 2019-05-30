#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=1,t1,t2,maxx=1;

    cin>>t1;
    for(int i=1;i<n;i++)
    {
        cin>>t2;
        if(t2>t1)
            ans++;
        if(ans>maxx)
            maxx=ans;
        if(t2<=t1)
        {
            ans=1;
        }
        t1=t2;

    }
    cout<<maxx<<endl;
}
