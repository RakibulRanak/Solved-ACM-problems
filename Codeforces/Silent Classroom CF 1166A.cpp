#include<bits/stdc++.h>
using namespace std;
int ara[26];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string c;
        cin>>c;
        char x= c[0];
        ara[x-97]++;
    }
    int ans=0;
    for(int i=0;i<26;i++)
    {
        int num=ara[i];
        int n1=ara[i]/2;
        int n2=ara[i]-n1;
       // cout<<i<<" "<<n1<<" "<<n2<<endl;

        if(n1>0)
        {
            n1--;
            ans+=n1*(n1+1)/2;
        }
        if(n2>0)
        {
            n2--;
            ans+=n2*(n2+1)/2;
        }
    }
    cout<<ans<<endl;
    return 0;
}
