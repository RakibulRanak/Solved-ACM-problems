#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<long long>vec1,vec2;
    int t;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        vec1.push_back(t);

    }
    vector<int>test;
    for(int i=0; i<m; i++)
    {
        bool abc=true;
        cin>>t;
        int x=0;
        for(x=0;x<test.size();x++)
        {
            if(test[x]==t){
                abc=false;
                break;
            }
        }
        if(abc){
        vec2.push_back(t);
        test.push_back(t);
        }

    }
    long long T;
    vector<pair<long long,int>>ans;
    for(int i=0;i<vec1.size();i++)
    {
        for(int j=0;j<vec2.size();j++)
        {
            T=vec1[i]*vec2[j];
            ans.push_back(make_pair(T,i));
        }
    }

    sort(ans.begin(),ans.end());
    int o=ans[ans.size()-1].second;
    int i=ans.size()-2;
    while(ans[i].second==o)
        i--;
    cout<<ans[i].first<<endl;
    return 0;

}


