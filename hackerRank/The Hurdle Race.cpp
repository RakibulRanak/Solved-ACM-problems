#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int maxx=0,t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t>maxx)
            maxx=t;
    }
    if(maxx<=k)
        cout<<0<<endl;
    else
        cout<<maxx-k<<endl;
    return 0;
}
