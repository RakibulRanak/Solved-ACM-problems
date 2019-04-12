#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long ans;
//    for(int i=1;i<n;i++)
//        ans+=2*i;
    ans=n*((n*n)+5)/6;
    cout<<ans<<endl;
    return 0;

}
