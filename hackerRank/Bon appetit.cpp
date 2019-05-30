#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(i==k)
            continue;
        sum+=t;
    }
    int ans=sum/2;
    int p;
    cin>>p;
    if(ans==p)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<p-ans<<endl;
    return 0;
}
