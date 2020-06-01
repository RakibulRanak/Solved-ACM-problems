#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ss="";
    int j=0,count=0;
    for(int i=1;i<n;i++)
    {
        if(s[j]==s[i])
        {
            count++;
        }
        else
        {
            ss+=s[j];
            ss+=s[i];
            j=i+1;
            i++;
        }
    }
    if((n-count)%2!=0)
        count++;
    cout<<count<<endl;
    cout<<ss<<endl;
    return 0;
}
