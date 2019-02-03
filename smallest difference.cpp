#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,ans=0;
        cin>>n;
        int ara[n];

        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);

        int count=0;

        for(int i=0; i<n; i++)
        {
            int j=i+1;
            if(i<n-1)
            {
                while(ara[i]-ara[j]==1||ara[i]-ara[j]==-1||ara[i]-ara[j]==0)
                {

                    j++;
                    if(j==n)
                        break;
                }
            }
            int k=i-1;
            if(i>0)
            {
                while(ara[i]-ara[k]==1||ara[i]-ara[k]==-1||ara[i]-ara[k]==0)
                {
                    k--;
                      count++;
                    if(k==-1)
                        break;
                }
            }
            if(count>ans)
                ans=count;
            count =0;
        }

        cout<<ans+1<<endl;
        count=0;


    }
    return 0;
}

