#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x,y;
        cin>>x>>y;
        if(x<=2)
            x=0;
        else
            x-=2;
        if(y<=2)
            y=0;
        else
            y-=2;
        x=ceil(x/3.0);
        y=ceil(y/3.0);
        if(x==0 ||y==0)
            cout<<max(x,y)<<endl;

        else{
            int ans=x*y;
            cout<<ans<<endl;
        }
    }
    return 0;
}
