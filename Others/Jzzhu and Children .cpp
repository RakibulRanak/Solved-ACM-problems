#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,temp,u,v;
    cin>>n>>m;
    queue<pair<int, int>> q;

    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        q.push(make_pair(temp, i));
    }
    while(!q.empty())
    {
        pair<int, int> top = q.front();
        u=top.first;
        v=top.second;
        if(u>m)
            q.push(make_pair(u-m,v));

        q.pop();
    }
    cout<<v<<endl;
    return 0;
}
