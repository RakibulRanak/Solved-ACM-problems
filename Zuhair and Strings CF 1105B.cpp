#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=1,value=0;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>m;
    string test="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char c;
    int r=0;
    if(k==1)
    {
        for(int i=0; i<n; i++)
            m[s[i]]++;

        for(int i=0; i<52; i++)
        {
            if(m[test[i]]>r)
            {
                r=m[test[i]];
                c=test[i];
            }
        }
        cout<<r<<endl;
        return 0;
    }

    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count==k)
        {
            i++;
            m[s[i-1]]++;
            count=1;
        }
    }


    for(int i=0; i<52; i++)
    {
        if(m[test[i]]>r)
        {
            r=m[test[i]];
            c=test[i];
        }
    }
    cout<<m[c]<<endl;
}
