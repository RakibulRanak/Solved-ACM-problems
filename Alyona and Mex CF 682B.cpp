#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);
    sort(ara,ara+n);
    int mex=1;
    for(int i=0;i<n;i++)
    {
        if(ara[i]>=mex)
            mex++;
    }
    cout<<mex<<endl;
    return 0;
}
