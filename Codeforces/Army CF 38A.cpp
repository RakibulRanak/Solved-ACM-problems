#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n-1];
    for(int i=0;i<n-1;i++)
        cin>>ara[i];
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=a-1;i<b-1;i++)
        sum+=ara[i];
    cout<<sum<<endl;
    return 0;

}
