#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    bool second=false;
    int count=0;
    if(k==0){
        cout<<s<<endl;
        return 0;
    }
    if(n==1)
        second=true;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
            continue;

        else  if(second)
        {
            s[i]='0';
            count++;
        }

        else if(s[i]!='1')
        {
            s[i]='1';
            count++;
        }
        second=true;
        if(count==k)
            break;
    }
    cout<<s<<endl;
}
