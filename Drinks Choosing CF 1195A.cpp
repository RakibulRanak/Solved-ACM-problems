#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        m[t]++;
    }
    int even=0,odd=0;
    int studentse=0,studentsodd=0;
    for(int i=0;i<=1000;i++)
    {
        if(m[i]%2==0 && m[i]!=0)
        {
            studentse+=m[i];
            even++;
        }
        else if(m[i]%2==1 &&m[i]!=0)
        {
            studentsodd+=((m[i]/2)*2);
        }
    }
    int drinksbaki=0;
    int ans=studentse+studentsodd;
    drinksbaki=((n+1)/2)-(ans/2);
    //ans+=(((n+1)/2)-ans);
    cout<<ans+drinksbaki<<endl;
}
