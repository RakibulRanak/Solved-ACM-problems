#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int> >vec;
        for(int i=0;i<3*n;i++)
        {
            int x,y;
            cin>>x>>y;
            vec.push_back(make_pair(x,i+1));

        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            cout<<vec[i*3].second<<" "<<vec[i*3+1].second<<" "<<vec[i*3+2].second<<endl;
        }
    }
}
