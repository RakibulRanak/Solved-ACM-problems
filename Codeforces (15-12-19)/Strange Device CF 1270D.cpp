#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
//osadharon!!!!!
int main()
{
    int n,k,m;
    cin>>n>>k;
    for(int i=1;i<=k+1;i++)
    {
        cout<<'?'<<' ';
        for(int j=1;j<=k+1;j++)
        {
            if(i!=j)
                cout<<j<<' ';
        }
        cout<<endl;
        int a,b;
        cin>>a>>b;
        mp[b]++;
    }
    cout<<'!'<<' '<<mp.rbegin()->second<<endl; 
} 