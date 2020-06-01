#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int even=0;
    string ara;
    cin>>ara;
    for(int i=0;i<n;i++){
        //scanf("%d",&ara[i]);
        if((ara[i]-48)%2==0)
            even++;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=even;
        if((ara[i]-48)%2==0)
            even--;
    }
    cout<<ans<<endl;
    return 0;

}
