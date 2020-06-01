#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a')
            count++;
    }
    int a=s.size()-count;
    if(a>count)
    {
        cout<<s.size()<<endl;
    }
    else if(a==count)
        cout<<s.size()-1<<endl;
    else
    {
        cout<<(2*a)-1<<endl;
    }
    return 0;
}
