#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int ara[5]={100,20,10,5,1};
    int i=0;
    while(i<5)
    {
        int temp=n/ara[i];
        ans+=temp;
        n=n-(ara[i]*temp);
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
