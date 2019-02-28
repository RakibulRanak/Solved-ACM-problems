#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"  ";
        }
        int t=0;
        int p=1;
        for(int x=2;x<(i+1)*2;x++)
        {
            cout<<t<<" ";
            t=t+p;
            if(t==i)
                p=-1;
        }
        cout<<0<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"  ";
        }
        int t=0;
        int p=1;
        for(int x=1;x<=(n-i-1)*2;x++)
        {
            cout<<t<<" ";
            t=t+p;
            if(t==n-i-1)
                p=-1;
        }
        cout<<0<<endl;
    }
    return 0;
}
