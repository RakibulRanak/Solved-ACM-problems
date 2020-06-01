#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b,a;
    string t;
    bool ans=false;
    for(int i=0;i<n;i++)
    {
        cin>>t>>b>>a;
        if(a>b &&b>=2400)
            ans=true;
    }
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
