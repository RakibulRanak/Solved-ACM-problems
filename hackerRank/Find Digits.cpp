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
        int num=n,ans=0;
        while(num!=0)
        {
            int d=num%10;
            num/=10;
            if(d==0)
                continue;
            if(n%d==0)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
