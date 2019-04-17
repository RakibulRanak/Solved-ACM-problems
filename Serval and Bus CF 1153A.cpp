#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,start,period;
    cin>>n>>t;
    int min=10000000,ans,temp;
    for(int i=0; i<n; i++)
    {

        scanf("%d %d",&start,&period);
        if(start>=t){
           temp=start;
            if(temp<min)
            {
                min=temp;
                ans=i+1;
            }
        }
        else
        {
            float x=ceil(((float)t-(float)start)/(float)period);
           temp=(period*x)+start;
            if(temp<min)
            {
                min=temp;
                ans=i+1;
            }
            //cout<<x<<" "<<ara[i]<<endl;
        }

    }
    cout<<ans<<endl;

    fflush(stdout);
    return 0;
}
