#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='4')
                count++;
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
