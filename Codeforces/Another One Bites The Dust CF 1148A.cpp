#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    a+=c;
    b+=c;
    if(a==b)
        cout<<2*a<<endl;
    else
        cout<<(min(a,b)*2)+1<<endl;
    return 0;
}
