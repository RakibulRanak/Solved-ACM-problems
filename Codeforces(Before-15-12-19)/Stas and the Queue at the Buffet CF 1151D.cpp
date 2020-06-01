#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int ara[n];
    int a,b;
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        ara[i]=a-b;
        ans+=(b*n)-a;
       // cout<<ans<<endl;
    }
    sort(ara,ara+n);
    int j=0;
    for(long long int i=n;i>=1;i--)
    {
        ans+=(i)*ara[j];
        j++;
    }
    cout<<abs(ans)<<endl;
    return 0;
}
