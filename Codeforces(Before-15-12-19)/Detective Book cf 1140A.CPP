#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    for(int i=1;i<n+1;i++)
        scanf("%d",&ara[i]);
    int temp1=ara[1];
    int i=1;
    int ans=0;

    while(i<=n)
    {
        while(i<temp1){
             i++;
            if(ara[i]>temp1)
                temp1=ara[i];
        }
        ans++;
        i++;
        temp1=ara[i];
    }
    cout<<ans<<endl;
    return 0;
}
