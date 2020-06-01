#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ara[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>ara[i];
        if(m[ara[i]]!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        m[ara[i]]=1;
    }

    bool ans1=true,ans2=true;
    int t=ara[0];
    int i;
    for( i=1;i<n;i++)
    {
        if(ara[i]>t)
        {
            t=ara[i];
        }
        else if(ara[i]==t)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
            break;
    }
    if(i==n)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(;i<n;i++)
    {
        if(ara[i]<t)
        {
            t=ara[i];
        }
        else if(ara[i]==t)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            break;
        }
    }
    if(i==n)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}


