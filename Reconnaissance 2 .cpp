#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans1,ans2;
    cin>>n;
    int ara[101];
    for(int i=0;i<n;i++)
        cin>>ara[i];

    int min=abs(ara[n-1]-ara[0]);
    ans1=1;
    ans2=n;
    for(int i=0;i<n;i++)
    {
        int temp=abs(ara[i+1]-ara[i]);
        if(temp<min)
        {
            min=temp;
            ans1=i+1;
            ans2=i+2;

        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}
