#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
        swap(n,m);

    long long int ans=0,temp1,temp2;
    for(int i=1;i<=5;i++)
    {
        temp1=n/5;
        if(n%5>=i)
            temp1++;
        temp2=m/5;
        if(m%5>=5-i)
            temp2++;
        if(i==5)
            temp2--;
        //cout<<temp1<<" "<<temp2<<endl;
        ans+=temp1*temp2;
    }
    
    cout<<ans<<endl;
}
