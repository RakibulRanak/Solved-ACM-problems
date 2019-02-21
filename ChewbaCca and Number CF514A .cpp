#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int ara[n];
    for(int i=0;i<n;i++)
    {
        ara[i]=s[i]-48;
    }
    if(ara[0]==9)
        cout<<9;
    else if(ara[0]>=5)
        cout<<9-ara[0];
    else
        cout<<ara[0];
    for(int i=1;i<n;i++)
    {
        if(ara[i]>4)
            cout<<9-ara[i];
        else
            cout<<ara[i];
    }
    return 0;

}

