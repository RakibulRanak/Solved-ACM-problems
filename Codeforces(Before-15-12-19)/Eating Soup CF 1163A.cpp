#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ans;
    if(m==0)
        ans=1;
    else if(m<=n/2)
        ans=m;
    else{
        ans=n/2-(m-n/2);
        if(n%2==1)
            ans++;
    }

    cout<<ans<<endl;
    return 0;
}
