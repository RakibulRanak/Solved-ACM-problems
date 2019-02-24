#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    vector<pair<int,int>>vec;
    for(int i=0;i<2*n;i++)
    {
        cin>>temp;
        vec.push_back(make_pair(temp,i));
    }
    sort(vec.begin(),vec.end());
    long long int sum1=0,sum2=0,t1=0,t2=0;
//    for(int i=0;i<2*n;i++)
//        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    for(int i=0;i<(2*n)-1;i=i+2)
    {
        sum1+=abs(vec[i].second-t1);
        t1=vec[i].second;
        sum2+=abs(vec[i+1].second-t2);
        t2=vec[i+1].second;
    }
    cout<<sum1+sum2<<endl;
    return 0;

}
