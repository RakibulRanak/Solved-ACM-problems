#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i;
    for(i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
