#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        double k,n,a,b;
        cin>>k>>n>>a>>b;
        bool bbb=false;
        int amax=ceil((k-a)/a);
        if(amax>=n)
            amax=n;
        else
        {
            int ty=ceil((k-b)/b);
            //cout<<ty<<endl;
            if(ty<n)
            {
                cout<<-1<<endl;
                bbb=true;
            }
            else
            {
                int bmax=n-amax;
                long long remain= k-(amax*a);
                long long ans=bmax*b;

                while(ans>=remain)
                {
                    if(amax<=0 || bmax>=n)
                    {
                        cout<<-1<<endl;
                        bbb=true;
                        break;
                    }
                    else
                    {
                        amax--;
                        bmax++;
                        remain=k-(amax*a);
                        ans=bmax*b;
                    }
                }
            }
        }
        if(!bbb)
        {
            cout<<amax<<endl;
        }
    }
}

