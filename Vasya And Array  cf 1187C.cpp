#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,high=0;
    cin>>n>>k;
    int ara[n];
    bool ans=true;
    memset(ara,0,sizeof(ara));
    vector<pair<int,int> >sorted;
    vector<pair<int,int> >unsorted;
    while(k--)
    {
        int a,b,c;
        cin>>a>>b>>c;


        if(a==1)
            sorted.push_back(make_pair(b,c));
        else
            unsorted.push_back(make_pair(b,c));

    }

    for(int j=0; j<sorted.size(); j++)
    {
        int b=sorted[j].first;
        int c=sorted[j].second;
        for(int i=b; i<c; i++)
            ara[i]=1;
    }
    for(int j=0; j<unsorted.size(); j++)
    {
        int b=unsorted[j].first;
        int c=unsorted[j].second;
        int i;
        //cout<<b<<" "<<c<<endl;
        for(i=b; i<c; i++)
        {
            if(ara[i]==1)
                continue;
            ara[i]=-1;
            break;
        }
        if(i==c)
            ans=false;
    }
//    for(int i=0; i<n; i++)
//        cout<<ara[i]<<" ";
  //  cout<<endl;
    if(!ans)
        cout<<"NO"<<endl;
    else
    {
        high+=1000;
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            high+=ara[i];
            cout<<high<<" ";
        }
        cout<<endl;
    }
    return 0;


}
