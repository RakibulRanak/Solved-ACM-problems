#include<bits/stdc++.h>
using namespace std;
int box[101][200001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int ara[n];
    map<int,int>m;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        box[ara[i]][i+1]=box[ara[i]][m[ara[i]]]+1;
        m[ara[i]]=i+1;
    }

    for(int i=0; i<101; i++)
    {
        int t=0;
        for(int j=0; j<200001; j++)
        {
            if(t>0 && box[i][j]==0)
                box[i][j]=t;
            if(box[i][j]!=t)
            {
                t=box[i][j];

            }
        }
    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=ara[i];
        double extra=0;
        int ans=0;
        if(sum>k)
        {
            extra=sum-k;
            int pos=i+1;
            double ase;
            for(double j=100; j>=1; j--)
            {
                if(j==ara[i])
                    ase=box[(int)j][pos-1];
                else
                    ase=box[(int)j][pos];
                if(ase==0)
                    continue;
                int dorkar=ceil(extra/j);
                if(ase>=dorkar)
                {
                    ans+=dorkar;
                    break;
                }
                else
                {
                    extra-=ase*j;
                    ans+=ase;
                }

            }
            cout<<ans<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }

}
