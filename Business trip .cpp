#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int ara[12];
    int sum=0;
    for(int i=0; i<12; i++)
    {
        cin>>ara[i];
        sum=sum+ara[i];
    }
    if(k==0)
        cout<<0<<endl;
    else if(sum<k)
        cout<<-1<<endl;
    else
    {
        sort(ara,ara+12,greater<int>());
        sum=ara[0];
        int i=0;
        while(sum<k)
        {
            i++;
            if(i>12)
                break;
            sum=sum+ara[i];
        }
            cout<<i+1<<endl;
    }
    return 0;
}
