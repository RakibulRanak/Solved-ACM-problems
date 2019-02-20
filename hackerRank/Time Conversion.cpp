#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,temp;
    string t;
    cin>>x>>t;
    //string x="";
    //cout<<x<<t;
    temp=x;
    if(t[6]=='P')
    {   if(x<12)
        temp=x+12;
    }
    if(t[6]=='A')
    {
        if(x>=12)
        temp=12-x;
    }
    if(temp>9)
    cout<<temp;
    else
        cout<<0<<temp;
    for(int i=0;i<6;i++)
        cout<<t[i];
    cout<<endl;
    return 0;
}
