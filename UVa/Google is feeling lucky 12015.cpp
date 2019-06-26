#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int h=0;
    while(t--)
    {
        h++;
        vector<pair<string,int>>vec;
        string s;
        int n;
        int o=0;
        for(int i=0;i<10;i++)
        {
            cin>>s>>n;

            vec.push_back({s,n});
            if(n>o)
                o=n;

        }

        cout<<"Case #"<<h<<":"<<endl;
        for(int i=0;i<10;i++)
        {
            if(vec[i].second==o)
                cout<<vec[i].first<<endl;
        }
    }
    return 0;

}
