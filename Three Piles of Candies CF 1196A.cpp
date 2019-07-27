#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        long long ara[3],a,b,c,d,ans;
        cin>>ara[0]>>ara[1]>>ara[2];
        sort(ara,ara+3);
        d=ara[1]-ara[0];
        c=ara[2];
        if(d%2==0)
        {
            ans=ara[0]+(c/2+(d/2));
        }
        else
        {
            if(c%2==0)
            {
                ans=ara[0]+(c/2+(d/2));
            }
            else
            {
                ans=ara[0]+(c/2 +((d+1)/2));
            }
        }
        cout<<ans<<endl;

    }
}
