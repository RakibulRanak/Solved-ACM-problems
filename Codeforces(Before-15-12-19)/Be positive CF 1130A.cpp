#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,pos=0,neg=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>0)
            pos++;
        else if(temp<0)
            neg++;
    }
    int d=ceil(n/2.0);
    int ans=1;
    if(neg>pos)
        ans=-1;
    if(neg<d&&pos<d)
        ans=0;

   cout<<ans<<endl;
   return 0;

}
