#include<bits/stdc++.h>
using namespace std;
int visited[52][52];
int vis[52][52];
int ara[52][52];
char ara2[52][52];
vector<int>lakes;
int p[]= {-1,0,0,1};
int q[]= {0,1,-1,0};
int n=1;
int val=0;
bool pani=false;

void dfs(int x,int y)
{
    for(int i=0; i<4; i++)
    {
        if(ara[x+p[i]][y+q[i]]==0)
        {
           val=0;
           ara[x][y]=0;
           pani=true;
           break;
        }
        if(i==3){
            val++;
            visited[x][y]=1;
        }
    }
    for(int i=0; i<4; i++)
    {
        if(val==0)
            break;
        if(ara[x+p[i]][y+q[i]]==1 &&visited[x+p[i]][y+q[i]]==0 )
        {
            dfs(x+p[i],y+q[i]);
            if(pani)
                ara[x][y]=0;
        }

    }
}
void dfscellfillup(int x,int y)
{

    for(int i=0; i<4; i++)
    {
        if(ara2[x+p[i]][y+q[i]]=='.' &&vis[x+p[i]][y+q[i]]==0 )
        {
            vis[x+p[i]][y+q[i]]=1;
            ara2[x+p[i]][y+q[i]]='*';
            dfscellfillup(x+p[i],y+q[i]);
        }

    }
}

int main()
{
        int x,y,l;
        char temp;
        int X,Y;
        cin>>x>>y>>l;
        getchar();
        for(int i=1; i<=x; i++)
        {

            for(int j=1; j<=y; j++)
            {
                temp=getchar();
                ara2[i][j]=temp;
                if(temp=='.')
                {

                    ara[i][j]=1;
                    lakes.push_back(i);
                    lakes.push_back(j);
                }
                else
                    ara[i][j]=2;

            }
            getchar();
        }
        int tot=0;
        vector<pair<int,pair<int,int>>>vec;
        for(int i=0;i<lakes.size();i+=2)
        {
            int x=lakes[i],y=lakes[i+1];
            if(visited[x][y]==0){
                visited[x][y]=1;

               pani=false;
                dfs(x,y);
            }
            if(val!=0)
            {
                vec.push_back({val,{x,y}});
                tot++;
            }
            val=0;
        }
        sort(vec.begin(),vec.end());
        int iii=0;
        int cells=0;
        for(int i=tot;i>l;i--)
        {
            vis[vec[iii].second.first][vec[iii].second.second]=1;
            ara2[vec[iii].second.first][vec[iii].second.second]='*';
            dfscellfillup(vec[iii].second.first,vec[iii].second.second);
            cells+=vec[iii].first;
            iii++;
        }
        cout<<cells<<endl;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                cout<<ara2[i][j];
            }
            cout<<endl;
        }

    return 0;
}


