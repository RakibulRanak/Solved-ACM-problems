#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    int ara[n][6];
    int ans=0;
    int x=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<6; j++)
        {

            cin>>ara[i][j];
        }
    }
    while(1)
    {
        int t1=x%10;
        vector<int>loc;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<6; j++)
            {
                if(ara[i][j]==t1)
                {
                    loc.push_back(i);
                    break;
                }
            }
        }
        if(loc.size()==0)
        {
            cout<<ans<<endl;
            return 0;
        }
        int t2=x/10,o;
        if(t2!=0)
        {
            for( o=0; o<loc.size(); o++)
            {
                int ek=loc[o];
                for(int j=0; j<n; j++)
                {
                    if(j==ek)
                        continue;
                    for(int p=0; p<6; p++)
                    {
                        if(ara[j][p]==t2)
                            goto here;
                    }
                }
            }
            if(o==loc.size())
            {
                cout<<ans<<endl;
                return 0;
            }
        }
here:
        ;
        x++;
        ans++;

    }



}
