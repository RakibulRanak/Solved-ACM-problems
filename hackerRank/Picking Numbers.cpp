#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        m[t]++;
    }
    int sum=0;
    for(int i=2;i<=100;i++)
    {
        if(m[i]+m[i-1]>sum)
            sum=m[i]+m[i-1];

    }
    cout<<sum<<endl;
    return 0;
}
