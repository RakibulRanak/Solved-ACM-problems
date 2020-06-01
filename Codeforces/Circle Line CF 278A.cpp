#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    int a,b;
    cin>>a>>b;
    int i=a-1;
    int sum1=0,sum2=0;
    while(a!=b)
    {
        sum1+=ara[i];
        i++;
        if(i==n)
            i=0;
        if(i==b-1)
            break;
    }
     i=b-1;
    while(a!=b)
    {
        sum2+=ara[i];
        i++;
        if(i==n)
            i=0;
        if(i==a-1)
            break;
    }
    cout<<(min(sum1,sum2))<<endl;
    return 0;
}
