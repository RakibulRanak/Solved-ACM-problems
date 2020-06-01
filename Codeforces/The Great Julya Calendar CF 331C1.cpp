#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        int m=n,maxx=0,t;
        while(m!=0)
        {
            t=m%10;
            m/=10;
            if(t>maxx)
                maxx=t;
        }
        n-=maxx;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
