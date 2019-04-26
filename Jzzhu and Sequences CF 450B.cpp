#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    int f1,f2,ans;
    cin>>f1>>f2;
    int n;
    cin>>n;
    n=n%6;
    if(n==1)
        ans=f1;
    else if(n==2)
        ans=f2;
    else if(n==3)
        ans=f2-f1;
    else if(n==4)
        ans=-f1;
    else if(n==5)
        ans=-f2;
    else if(n==0)
        ans=f1-f2;

    ans=ans%mod;
    if(ans<0)
        ans+=mod;
    cout<<ans<<endl;
    return 0;

}
