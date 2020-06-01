#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
        ans*=i;
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c=min(a,b);
    cout<<fact(c)<<endl;
    return 0;
}
