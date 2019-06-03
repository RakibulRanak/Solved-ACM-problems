#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    bool print=true;
    cin>>n;
    int sum=0,sum1=0;
    int ara[2*n];
    for(int i=0; i<2*n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+2*n);
    for(int i=0; i<n; i++)
        sum1+=ara[i];
    if(sum1*2 ==sum)
    {
        print=false;
        cout<<-1<<endl;
    }
    if(print)
    {
        for(int i=0; i<2*n; i++)
            cout<<ara[i]<<" ";
        cout<<endl;
    }
    return 0;

}
