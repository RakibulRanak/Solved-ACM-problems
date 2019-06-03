#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(int i=0;i<n;i+=2)
        cout<<ara[i]<<" ";
    if(n%2==1)
        n=n-2;
    else
        n=n-1;
    for(int i=n;i>=1;i-=2)
        cout<<ara[i]<<" ";
    cout<<endl;
    return 0;
}
