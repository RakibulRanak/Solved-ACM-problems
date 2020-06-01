#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int ara[m];
    for(int i=0;i<m;i++)
        cin>>ara[i];
    sort(ara,ara+m);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]>=0)
            break;
        sum=sum+ara[i];
    }
    cout<<abs(sum)<<endl;
    return 0;
}
