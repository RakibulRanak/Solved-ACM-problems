#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp;
    int pos1,pos2;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==1)
            pos1=i+1;
        else if(temp==n)
            pos2=i+1;
    }
    if(pos1>pos2)
        swap(pos1,pos2);
    int ans=max((n-pos1),(pos2-1));
    cout<<ans<<endl;
    return 0;
}
