#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start;
    int ara[n];
    vector<int>x;
    x.push_back(1);
    vector<int>sta;
    for(int i=2; 2*i<n; i++)
    {
        if(n%i==0)
            x.push_back(i);
    }
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
            sta.push_back(i);
    }
    bool ans=false;
    int sum;
    int pos=0;
    if(sta.size()<3)
        goto there;
    for(int i=0; i<x.size(); i++)
    {
        int temp=x[i];
        sum=temp;
        for(pos=0; sta[pos]<temp; pos++)
        {
            if(pos>=sta.size())
                break;
            for(int j=sta[pos]; j<n; j=j+sum)
            {
                if(sta[pos]>=temp)
                {
                    break;
                }
                if(ara[j]==0)
                {
                    break;
                }
                else if(j==n-temp+sta[pos])
                {
                    cout<<"YES"<<endl;
                    ans=true;
                    goto there;
                }
            }
        }
    }
there:
    ;
    if(!ans)
        cout<<"NO"<<endl;
    return 0;
}
