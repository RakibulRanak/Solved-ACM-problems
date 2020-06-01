#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans;
    ans=((a^b)&(c|d))^((b&c)|(a^d));
    cout<<ans<<endl;
    return 0;
}
