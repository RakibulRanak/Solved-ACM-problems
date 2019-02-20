#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,left=0,right=0;
    cin>>n;
    int ara[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>num;
            if(i==j)
            {
                left=left+num;
            }
            if(i+j==n-1)
            {
                right=right+num;
            }
        }
    }
    int ans=abs(left-right);
    cout<<ans<<endl;
    return 0;


}


