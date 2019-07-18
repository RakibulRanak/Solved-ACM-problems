#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ara[n];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ara[i];
        if(sum>k)
        {
            int biyog=sum-k;
            int temp=0;
            int ans=0;
            sort(ara,ara+i);
            for(int j=i-1;j>=0;j--)
            {
                temp+=ara[j];
                ans++;
                if(temp>=biyog)
                {
                    cout<<ans<<" ";
                    break;
                }


            }
        }
        else
            cout<<0<<" ";
    }
    cout<<endl;
    return 0;
}
