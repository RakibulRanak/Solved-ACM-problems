#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int temp=0,max_=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>max_)
        {
            max_=temp;
            ans=0;
        }
        else if(temp==max_)
            ans++;
    }
    cout<<ans+1<<endl;
    return 0;


}
