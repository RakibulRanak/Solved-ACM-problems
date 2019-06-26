#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ara[3]={2,3,5};
        int step=0;
        while(n!=1)
        {
            int i=0;
            for( i=0;i<3;i++)
            {
                if(n%ara[i]==0)
                {
                   n=(n/ara[i])*(ara[i]-1);
                   break;
                }
            }
            if(i==3)
            {
                step=-1;
                break;
            }
            step++;
        }
        cout<<step<<endl;
    }
    return 0;
}
