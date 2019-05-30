#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        m[t]++;
    }
    int ans=0,anss;
    for(int i=1;i<=5;i++)
    {
        if(m[i]>ans){
            ans=m[i];
            anss=i;
        }
    }
    cout<<anss<<endl;
    return 0;
}
