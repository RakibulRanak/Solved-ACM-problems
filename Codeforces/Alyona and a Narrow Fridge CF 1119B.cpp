#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int ara[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);
    vector<int>vec;
    long long int temp=0;int ans=0;
    for(int i=0;i<n;i++)
    {
        vec.push_back(ara[i]);
        sort(vec.begin(),vec.end(),greater<int>());
        for(int j=0;j<vec.size();j+=2)
        {
            temp+=vec[j];
            if(temp>h)
                goto here;

        }
        temp=0;
        ans=i+1;

    }
    here:;
    cout<<ans<<endl;
    return 0;
}
