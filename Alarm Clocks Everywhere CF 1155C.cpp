#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int x,long long int y)
{
    if (x == 0)
        return y;
    return gcd(y % x, x);
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    long long int t1,t2,temp,min_,h=0;
    cin>>t1;
    min_=t1;
    bool fdhuk=true;

    for(int i=2;i<=n;i++)
    {
        cin>>t2;
        temp=t2-t1;
        if(temp==0)
            continue;
        if(fdhuk)
        {
           h=temp;
           fdhuk=false;
        }
        else if(temp%h!=0)
            h=gcd(h,temp);
    }
    long long int a;
    int ans;
    bool dhuk =true;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        if(h%a==0 &&dhuk)
        {
            ans=i+1;
            dhuk=false;
        }
    }
    if(!dhuk &&h!=0)
    {
        cout<<"YES"<<endl;
        cout<<min_<<" "<<ans<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
