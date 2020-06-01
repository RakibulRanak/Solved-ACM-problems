#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0){
            long long ans=2*pow(2,(n/2)-1);
        cout<<ans<<endl;


        }
    else
        cout<<0<<endl;
    return 0;
}
