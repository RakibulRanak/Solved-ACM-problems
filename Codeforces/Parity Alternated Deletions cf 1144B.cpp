#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int temp,sum=0,esum=0,osum=0;
    vector<int>even;
    vector<int>odd;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&temp);
        sum+=temp;
        if(temp%2==0){
            even.push_back(temp);
            esum+=temp;
        }
        else{
            odd.push_back(temp);
            osum+=temp;
        }
    }
    int e,o;
    e=even.size();
    o=n-e;
    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end(), greater<int>());
    if(e==o+1||e==o||o==e+1)
        cout<<0<<endl;
    else if(e==0)
        cout<<osum-odd[0]<<endl;
    else if(o==0)
        cout<<esum-even[0]<<endl;

    else if(e<o-1)
    {

        long long int tsum=0;
        for(int i=0;i<=e;i++)
            tsum+=odd[i];
        long long int ans=osum-tsum;
        cout<<ans<<endl;
    }
     else if(o<e-1)
    {

        long long int tsum=0;
        for(int i=0;i<=o;i++)
            tsum+=even[i];
        long long int ans=esum-tsum;
        cout<<ans<<endl;
    }
    return 0;
}
