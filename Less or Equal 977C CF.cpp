#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    bool x=true;

    int ara[n];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
     if(k==0)
    {
        if(ara[0]==1)
            cout<<-1<<endl;
        else if(ara[0]>1)
            cout<<1<<endl;
        x=false;
    }
    int count=0;
    int  i=0;
    while(x)
    {
         if(i>=k-1&&ara[i]!=ara[i+1]){
            cout<<ara[i]<<endl;
            break;
        }

        if(i>=k-1&&ara[i]==ara[i+1]){
            cout<<-1<<endl;
            break;
        }
        if(i<k)
            i++;
    }
    return 0;

}
