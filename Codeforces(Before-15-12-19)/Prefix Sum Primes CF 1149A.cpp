#include<bits/stdc++.h>
using namespace std;
int prime[400005];

int main()
{
    int n,temp;
    cin>>n;
    int one=0,two=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==1)
            one++;
        else
            two++;
    }


    for (int p=2; p*p<=2*n+4; p++)
    {
        if (prime[p] == 0)
        {
            for (int i=p*p; i<=2*n+4; i += p)
                prime[i] = 1;
        }
    }
    prime[0]=1;
    prime[1]=1;
    int j=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        while(prime[j]!=0)
            j++;
        while(sum<j)
        {
            if(sum+2<=j &&two>0)
            {
                sum+=2;
                two--;
                cout<<2<<" ";
            }
            else if(one>0)
            {
                sum+=1;
                one--;
                cout<<1<<" ";
            }
            else if(two>0)
            {
                sum+=2;
                two--;
                cout<<2<<" ";
            }
            if(one==0 &&two==0)
                return 0;
        }
        j++;
    }
    return 0;

}
