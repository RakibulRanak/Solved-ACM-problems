#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=1,i=1;
        while(i<=n)
        {
            if(i%2==1)
            {
                ans*=2;
            }
            else{
                ans++;
            }
            i++;
        }
        cout<<ans<<endl;
    }
}
