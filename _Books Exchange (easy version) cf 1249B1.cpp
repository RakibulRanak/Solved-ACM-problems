#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        int ans=1;
        int i=1;
        while(i<n)
        {   
            if(ara[i]==ara[i-1]+1)
            {
                ans=2;
                break;
            }
            i++;
        }
        cout<<ans<<endl;

    }


    return 0;


}