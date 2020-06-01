#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=1;
    cin>>n;
    for(int i=2; i<=n; i++)
        sum+=4+(i-2)*4;
    cout<<sum<<endl;
    return 0;
}
