#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    s="a"+s;
    string ara="a";
    char c;
    for(int i=0;i<9;i++){
        cin>>c;
        ara+=c;
    }

    for(int i=1;i<=n;i++)
    {
       // cout<<s[i]<<"bb "<<ara[s[i]-'0']<<endl;
        if((s[i])<ara[s[i]-'0'])
        {
            int j=i;
            char x=ara[s[i]-'0'];

           // cout<<y<<" "<<i<<endl;
            while(s[j]<=x)
            {
                char y=ara[s[j]-'0'];
                s[j]=y;
                j++;
                x=ara[s[j]-'0'];
            }
            break;
        }
    }
    cout<<s.substr(1,n)<<endl;
    return 0;
}

