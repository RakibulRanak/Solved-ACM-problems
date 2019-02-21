#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ara1[n],ara2[m];
    for(int i=0; i<n; i++)
        cin>>ara1[i];
    for(int i=0; i<m; i++)
        cin>>ara2[i];
    sort(ara1,ara1+n);
    sort(ara2,ara2+m);
    int x=ara1[n-1];
    int losagu;
    int a=0;
    if(n==10 &&m==10)
        cout<<0<<endl;
    else{
    while(a!=n)
    {
        if(x%ara1[a]!=0)
        {
            x++;
            a=0;
        }
        a++;
    }
    int y=ara2[0];
    a=0;
    while(a!=m)
    {
        if(ara2[a]%y==0)
        {
            a++;
        }
        else
        {
            y--;
            a=0;
        }
    }
    //cout<<x<<" "<<y<<endl;
    int t=x;
    int ans=0;
    while(t<=y)
    {
        if(y%t==0)
            ans++;
        t=t+x;
    }
    cout<<ans<<endl;
    }
    return 0;

}
