#include<bits/stdc++.h>
using namespace std;
int bap,cnt;
int aravis[500005];

void dfs(int source,vector<int>edge[])
{

    aravis[source]=bap;
    cnt++;
    for(int i=0;i<edge[source].size();i++)
    {
        int u=edge[source][i];
       if(!aravis[u])
           dfs(u,edge);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> edge[n+1];
    for(int i=0; i<m; i++)
    {

        int t1,t2,t3;
        cin>>t1;
        if(t1>0)
        {
            cin>>t2;
                for(int i=0; i<t1-1; i++)
                {
                    cin>>t3;
                    edge[t2].push_back(t3);
                    edge[t3].push_back(t2);
                }

        }
    }
    int ans[n+1];
    for(int i=1; i<=n; i++)
    {
        if(!aravis[i])
        {
           bap=i;
           cnt=0;
           dfs(i,edge);
           ans[i]=cnt;
        }
        else
        {
            ans[i]=ans[aravis[i]];
        }

    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";

    return 0;

}
