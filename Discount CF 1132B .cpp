#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        sum=sum+ara[i];
    }
    sort(ara,ara+n);
    int m,temp;
    cin>>m;
    for(int i=0;i<m;i++)
    {


        scanf("%d",&temp);
        printf("%lld\n",sum-ara[n-temp]);
    }
    return 0;

}
