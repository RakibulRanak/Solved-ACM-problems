#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ara1[n];
    int ara2[n];
    long long h1=0,h2=0,t1=0,t2=0,high;
    for(int i=0; i<n; i++)
        cin>>ara1[i];
    for(int i=0; i<n; i++)
        cin>>ara2[i];
    for(int i=0;i<n;i++)
    {
        t1=max(h1,h2+ara1[i]);
        t2=max(h2,h1+ara2[i]);
        h1=t1;
        h2=t2;
    }
    high=max(h1,h2);
    cout<<high<<endl;
    return 0;

}
