#include<bits/stdc++.h>
using namespace std;
long long power(int pow)
{
    long long temp=1;
    for(int i=1;i<=pow;i++)
      temp=  temp*2;
    return temp;
}
int main()
{
    long long ans=0;
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        long long temp=power(i);
        ans=ans+temp;
    }
    cout<<ans<<endl;
    return 0;
}
