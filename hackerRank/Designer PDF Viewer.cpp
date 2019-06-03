#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcdefghijklmnopqrstuvwxyz";
    int t;
    map<char,int>m;
    for(int i=0;i<26;i++)
    {
        cin>>t;
        m[s[i]]=t;
    }
    string temp;
    cin>>temp;
    int maxx=0;
    for(int i=0;i<temp.size();i++)
    {
        if(m[temp[i]]>maxx)
            maxx=m[temp[i]];
    }
    cout<<temp.size()*maxx<<endl;
    return 0;

}
