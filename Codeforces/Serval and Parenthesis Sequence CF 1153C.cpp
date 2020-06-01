#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=0,r=0;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==1){
        cout<<":("<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            l++;
        else if(s[i]==')')
            r++;
    }
    if(r>n/2 || l>n/2)
    {
        cout<<":("<<endl;
        return 0;
    }
    l=n/2-l;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?')
        {
            if(l>0)
            {
                s[i]='(';
                l--;
            }
            else
                s[i]=')';

        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            count++;
        else
            count--;
        if(count<=0 && i<n-1)
        {
            cout<<":("<<endl;
            return 0;
        }
    }
    if(count==0)
        cout<<s<<endl;
    return 0;
}
