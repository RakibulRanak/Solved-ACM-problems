#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="nite";
    map<char,int>m;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
        m[a[i]]++;
    int ans=100;
    int n=m['n'];
    m['n']=(m['n']-1)/2;
    m['e']=m['e']/3;
    for(int i=0;i<s.size();i++)
    {
        if(m[s[i]]<ans)
            ans=m[s[i]];
    }
    cout<<ans<<endl;

}
