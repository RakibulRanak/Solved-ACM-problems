#include<bits/stdc++.h>
using namespace std;
int main()

{
    int r,c;
    cin>>r>>c;
    vector<int>vec1[r+c-1];
    vector<int>vec2[r+c-1];
    int temp;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>temp;
            vec1[i+j].push_back(temp);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>temp;
            vec2[i+j].push_back(temp);
        }
    }
    //bool ans=true;
    for(int i=0;i<r+c-1;i++)
    {
        //cout<<i<<":"<<endl;
        sort(vec1[i].begin(),vec1[i].end());
        sort(vec2[i].begin(),vec2[i].end());
        for(int j=0;j<vec1[i].size();j++)
        {
            if(vec1[i][j]!=vec2[i][j])
            {
                //ans=false;
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
