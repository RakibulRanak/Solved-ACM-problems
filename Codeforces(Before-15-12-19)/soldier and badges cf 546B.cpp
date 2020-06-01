#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);
    sort(ara,ara+n);
    int count=0;
    int temp=ara[0];
    for(int i=1;i<n;i++)
    {
      // cout<<temp<<endl;
        if(ara[i]<=temp)
        {
            count+=(temp-ara[i])+1;
            ara[i]=ara[i]+(temp-ara[i])+1;

            temp=ara[i];
        }
        else
            temp=ara[i];
    }
    cout<<count<<endl;
    return 0;
}
