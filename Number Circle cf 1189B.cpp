#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long ara[n];
    for(int i=0; i<n; i++)
        cin>>ara[i];
    sort(ara,ara+n);
    if(ara[n-1]<ara[n-2]+ara[n-3])
    {
        cout<<"YES"<<endl;
        swap(ara[n-1],ara[n-2]);
        for(int i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;

}
