#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    cin>>n>>k>>m;
    m=min(k,m);
    if(min(m,n)>=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
