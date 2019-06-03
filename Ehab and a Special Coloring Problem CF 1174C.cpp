#include<bits/stdc++.h>
using namespace std;
int ara[100005];
int main()
{
    int n;
    cin>>n;
    int flag=1;
    for(int i=2;i<=n;i++)
    {
        if(ara[i]==0)
        {
            for(int j=i;j<=n;j+=i)
                ara[j]=flag;
            flag++;
        }
    }
    for(int i=2;i<=n;i++)
        cout<<ara[i]<<" ";
    cout<<endl;
    return 0;

}
