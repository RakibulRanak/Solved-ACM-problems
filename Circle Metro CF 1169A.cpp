#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    bool ans=false;
    int ga;
    if(x<a)
    {
        ga=n-a+x;
    }
    else
        ga=x-a;
    int gb;
    if(y>b)
    {
        gb=b+n-y;
    }
    else
        gb=b-y;
    int i=0;
   // cout<<ga<<" "<<gb<<endl;
    while(i<=gb && i<=ga)
    {
        if(a==b)
            {
                ans=true;
                break;
            }
        a++;
        if(a==n+1)
            a=1;
        b--;
        if(b==0)
            b=n;
        i++;

    }
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
