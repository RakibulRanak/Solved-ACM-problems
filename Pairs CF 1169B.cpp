#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> >vec;
    int t1,t2;
    for(int i=0; i<m; i++)
    {
        cin>>t1>>t2;
        vec.push_back(make_pair(t1,t2));
    }
    int ans[4];
    int a= ans[0]=vec[0].first;

    int b=ans[1]=vec[0].second;
    int i=0;
    for(i=0; i<m; i++)
    {
        if(vec[i].first!=a&&vec[i].first!=b&&vec[i].second!=a&&vec[i].second!=b)
        {
            ans[2]=vec[i].first;
            ans[3]=vec[i].second;
            break;
        }
    }
    if(i==m)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    int p;
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            a= ans[i];
            b=ans[j];

            for(p=0; p<m; p++)
            {
                if(vec[p].first!=a&&vec[p].first!=b&&vec[p].second!=a&&vec[p].second!=b)
                {
                    break;
                }
            }
            if(p==m)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
