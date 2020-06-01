#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    ans=ara[n-1];
    int temp=ara[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(ara[i]>=temp)
            temp=temp-1;
        else
            temp=ara[i];
        ans+=temp;
        if(temp<=1)
            break;
    }
    cout<<ans<<endl;
    return 0;
}
