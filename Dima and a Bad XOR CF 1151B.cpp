#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,t;
    cin>>n>>m;
    vector<int>vec[n];
    vector<int>index[n];
    int ara[1024*4];
    for(int i=0; i<n; i++)
    {
        memset(ara,0,1024*4);
        for(int j=0; j<m; j++)
        {
            cin>>t;
            if(ara[t]==0)
            {
                vec[i].push_back(t);
                index[i].push_back(j+1);
            }
            ara[t]=1;
        }
    }
    int niche=n-1;
    int sum=0;
    int sum2=0;
    vector<int>ansupore;
    vector<int>ansniche;
    while(vec[niche].size()==1)
    {
        sum^=vec[niche][0];
        ansniche.push_back(index[niche][0]);
        niche--;
        if(niche<0)
            break;
    }
    if(niche==n-1)
    {
        for(int i=0; i<niche; i++)
        {
            sum2^=vec[i][0];
            ansupore.push_back(index[i][0]);
        }
        int last,i;
        for(i=0; i<vec[niche].size(); i++)
        {
            if((sum2^vec[niche][i])>0)
            {
                last=index[niche][i];
                cout<<"TAK"<<endl;
                for(int i=0; i<niche; i++)
                    cout<<ansupore[i]<<" ";
                cout<<last<<endl;
                break;
            }
        }
        if(i==vec[niche].size())
            cout<<"NIE"<<endl;
    }

    else if(n==1)
    {
        int i;
        for( i=0; i<vec[0].size(); i++)
        {
            if(vec[0][i]!=0)
            {
                cout<<"TAK"<<endl;
                cout<<index[0][i]<<endl;
                break;
            }
        }
        if(i==vec[0].size())
            cout<<"NIE"<<endl;
    }

    else if(niche>0)
    {
        for(int i=0; i<niche; i++)
        {
            sum2^=vec[i][0];
            ansupore.push_back(index[i][0]);
        }
        int mid,i;
        for( i=0; i<vec[niche].size(); i++)
        {
            if((sum2^vec[niche][i]^sum)>0)
            {
                mid=index[niche][i];
                break;
            }
        }
        if(i==vec[niche].size())
            cout<<"NIE"<<endl;
        else
        {
            cout<<"TAK"<<endl;
            for(int i=0; i<ansupore.size(); i++)
                cout<<ansupore[i]<<" ";
            cout<<mid<<" ";
            for(int i=ansniche.size()-1; i>=0; i--)
                cout<<ansniche[i]<<" ";
        }
    }

    else if(niche==0)
    {
        int start,i;
        for( i=0; i<vec[niche].size(); i++)
        {
            if((vec[niche][i]^sum)>0)
            {
                start=index[niche][i];
                break;
            }
        }
        if(i==vec[niche].size())
            cout<<"NIE"<<endl;
        else
        {
            cout<<"TAK"<<endl;
            cout<<start<<" ";
            for(int i=ansniche.size()-1; i>=0; i--)
                cout<<ansniche[i]<<" ";
        }
    }

    else if(niche<0)
    {
        int sum3=0;
        for(int i=0; i<n; i++)
            sum3^=vec[i][0];
        if(sum3==0)
            cout<<"NIE"<<endl;
        else
        {
            cout<<"TAK"<<endl;
            for(int i=0; i<n; i++)
                cout<<1<<" ";
        }
    }
    return 0;

}


