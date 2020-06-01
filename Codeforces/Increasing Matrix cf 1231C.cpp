#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ara[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin>>ara[i][j];
    }
    int temp=ara[n-1][m-1];
    bool ans=true;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=m-1; j>=0; j--)
        {
            if(i==n-1 && j==m-1)
                continue;

            if(i==n-1)
            {
                if(ara[i][j]>=ara[i][j+1])
                    ans=false;

            }
            else if(j==m-1)
            {
                if(ara[i][j]>=ara[i+1][j])
                    ans=false;

            }
            else if(ara[i][j]==0)
                ara[i][j]=min(ara[i+1][j],ara[i][j+1])-1;

            else if(ara[i][j]>=min(ara[i+1][j],ara[i][j+1]))
                ans=false;
        }

    }
    long long sum=0;
    if(!ans)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            sum+=ara[i][j];

    cout<<sum<<endl;
    return 0;

}
