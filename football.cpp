#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=1;
    bool no=true;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
            sum++;
        else
            sum=1;
        if(sum>=7)
        {
            cout<<"YES"<<endl;
            no=false;
            break;
        }
    }
    if(no)
        cout<<"NO"<<endl;
    return 0;
}
