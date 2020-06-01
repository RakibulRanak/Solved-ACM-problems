#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    while(n>0 && m>0)
    {
        if(n==1 && m==1)
            break;

        if(n<m)
        {
            m-=2;
            n-=1;
        }
        else
        {
            m-=1;
            n-=2;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
