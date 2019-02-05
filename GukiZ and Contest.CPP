#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    int ara2[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        ara2[i]=ara[i];
    }
    sort(ara, ara+n, greater<int>());
    int max=ara[0];
    int temp[2001];
    int x=1;

    for(int i=0;i<n;i++)
    {
        if(ara[i]==max)
            temp[ara[i]]=x;
        else
        {
            temp[ara[i]]=i+1;
            max=ara[i];
            x=i+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[ara2[i]]<<" ";
    }
    return 0;
}
