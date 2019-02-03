#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    typedef pair<int, int> P;
    priority_queue< P, vector<P>, greater<P> > Q;
    int cost,quality;
    for(int i=0;i<n;i++)
    {
        cin>>cost>>quality;
        Q.push({cost,quality});
    }
    int max;
    int var=1;
    pair<int,int>top;
    top=Q.top();
    max=top.second;
    Q.pop();
    while(!Q.empty())
    {
        top=Q.top();
        if(top.second<max)
        {
            var=0;
            cout<<"Happy Alex"<<endl;
            break;
        }
        max=top.second;
        Q.pop();

    }
    if(var==1)
        cout<<"Poor Alex"<<endl;
    return 0;

}
