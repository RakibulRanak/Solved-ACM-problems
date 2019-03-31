#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cz=0,co=0;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==0)
            cz++;
        else
            co++;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]==0)
            cz--;
        else
            co--;
        if(cz==0||co==0)
        {
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
