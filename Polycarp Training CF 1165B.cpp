#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    int count=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]<=count)
            continue;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
