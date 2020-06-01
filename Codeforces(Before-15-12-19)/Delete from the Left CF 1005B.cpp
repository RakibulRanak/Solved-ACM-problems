#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;

    //cout<<a<<a.size()<<endl;
    int len1=a.size();
    int len2=b.size();
    int len=min(len1,len2),i=1;
    int ans=0;
    while(i<=len)
    {
        if(a[len1-i]==b[len2-i])
            ans++;
        else
            break;
        i++;
    }
    cout<<len1+len2-ans-ans<<endl;
    return 0;

}
