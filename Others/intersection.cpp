#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x=n+m;
    while(x)
    {
        vector<int>vec1;
        vector<int>vec2;
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            vec1.push_back(a);

        }
        for(int i=0; i<m; i++)
        {
            int b;
            cin>>b;
            vec2.push_back(b);

        }
        set_intersection(vec1.begin(),vec1.end(),vec2.begin(),vec2.end(),back_inserter(vec));
        int c=vec.size();
        cout<<c<<endl;
        cin>>n>>m;
        x=n+m;
    }
    return 0;

}
