#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[3],d;
    cin>>ara[0]>>ara[1]>>ara[2]>>d;
    sort(ara,ara+3);
    int ans=0;
    if(ara[1]-ara[0]<d)
        ans+=d-ara[1]+ara[0];
    if(ara[2]-ara[1]<d)
        ans+=d-ara[2]+ara[1];
    cout<<ans<<endl;
    return 0;

}
