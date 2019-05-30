#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c;
    while(c--)
    {
        cin>>n>>m;
        if(m==n-1)
        {
            cout<<m<<endl;

        }
        else
        {
            int ans=n-3;
            int ap=6;
            int t=n+1;
            int N=4;
            int br=3; //for 4 points initial
            while(t<=m)
            {
                br++;
                t+=(ap-br);
                br=ap;
                ans--;
                ap+=N;
                N++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
