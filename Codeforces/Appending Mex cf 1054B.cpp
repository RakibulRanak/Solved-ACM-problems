#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
        cin>>ara[i];
    int low=0;
    int high=0;
    int i=1;
    if(ara[0]!=0)
        cout<<1<<endl;

    else
    {
        for( i=1; i<n; i++)
        {
            if(ara[i]>=low &&ara[i]<=high+1)
            {
                if(ara[i]>=high+1)
                    high=ara[i];
            }
            else
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    if(i==n)
    {   if(n==1&&ara[0]==0)
            cout<<-1<<endl;
        else if(n>1)
            cout<<-1<<endl;
    }

    return 0;
}
