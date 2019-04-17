#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[4];
    for(int i=0; i<=3; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+4);
    for(int i=0; i<=2; i++)
    {
        cout<<ara[3]-ara[i]<<" ";
    }
    return 0;
}
