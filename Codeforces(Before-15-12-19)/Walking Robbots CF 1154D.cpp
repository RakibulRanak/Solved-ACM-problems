#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,a;
    cin>>n>>b>>a;
    int ara[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);
    int ans=0;
    int B=b,A=a;
    for(int i=0;i<n;i++)
    {
        if(ara[i]==0)
        {
            if(A!=0)
            {
                A--;
                ans++;
            }
            else if(B!=0)
            {
                B--;
                ans++;
            }
        }
        else
        {
           if(A==a)
           {
                A--;
                ans++;
           }
           else if(B!=0)
           {
               B--;
               ans++;
               if(A<a)
                A++;
           }
           else if(A!=0)
           {
               A--;
               ans++;
           }
        }
        if((A==0 &&B==0)||ans==n )
        {
            cout<<ans<<endl;
            break;
        }
    }
    return 0;
}
