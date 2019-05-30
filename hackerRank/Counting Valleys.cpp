#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c;
    int sum=0,ans=0;

    for(int i=0;i<n;i++)
    {
        cin>>c;

        int x=sum;
        if(c=='U')
            sum++;
        else
            sum--;
        if(x==0 && sum==-1)
            ans++;

    }
    cout<<ans<<endl;
    return 0;
}
