#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);
    int max1,max2;
    for(int i=n-1;i>0;i--)
    {
        if(ara[0]!=ara[i])
        {
            max1=i;
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(ara[i]!=ara[n-1])
        {
            max2=n-1-i;;
            break;
        }
    }
    max1=max(max1,max2);
    cout<<max1<<endl;
    return 0;
}