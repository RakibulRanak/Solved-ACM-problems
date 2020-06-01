#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<"YES"<<endl;
    for(long long i=a;i<b;i+=2)
        cout<<i<<" "<<i+1<<endl;
    return 0;
}

