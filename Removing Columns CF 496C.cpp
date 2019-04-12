#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    string ara[r];
    vector<int>vec;
    for(int i=0;i<r;i++)
    {
        cin>>ara[i];
    }
    int visitc=-1;
    int ans=0;
    int j;
    for(int i=0;i<c;i++)
    {
        for( j=0;j<r-1;j++)
        {
            if(visitc<0)
            {
                if(ara[j][i]>ara[j+1][i])
                    break;
            }
            else
            {
                bool boro=false;
                for(int u=vec.size()-1;u>=0;u--)
                {
                    if(ara[j][vec[u]]<ara[j+1][vec[u]])
                    {
                        boro=true;
                        break;
                    }
                }
                if(!boro&&ara[j][i]>ara[j+1][i])
                    break;

            }
        }
        if(j==r-1)
        {
            visitc=i;
            vec.push_back(i);
            ans++;
        }
    }
    cout<<c-ans<<endl;
    return 0;
}
