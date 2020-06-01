#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    bool ans=true;
    for(int i=1;i<s.size();i++)
    {
        if(abs(s[i]-s[i-1])==1)
        {
            ans=false;
            break;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string odd="";
        string even="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]%2==0)
                even+=s[i];
            else
                odd+=s[i];
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        if(check(odd+even))
            cout<<odd+even<<endl;
        else if(check(even+odd))
            cout<<even+odd<<endl;
        else
            cout<<"No answer"<<endl;
    }
    return 0;
}
