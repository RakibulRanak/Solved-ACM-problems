#include<bits/stdc++.h>
using namespace std;
int main()
{
    int power,n,pow,bon;
    cin>>power>>n;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++)
    {
        cin>>pow>>bon;
        vec.push_back(make_pair(pow,bon));
    }
    sort(vec.begin(),vec.end());
    int total_power=power;
    int i;
    for( i=0;i<n;i++)
    {
        if(vec[i].first<total_power)
        {
            total_power+=vec[i].second;
        }
        else
            break;
    }
    if(i==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
