#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        string temp="";
        char c=s1[0];
        int i=0,j=0;
        bool ans=true;
        while(i<s1.size()&& j<s2.size())
        {
            int size1=0;
            int size2=0;
            c=s1[i];
            while(c==s1[i] &&i<s1.size())
            {
                i++;
                size1++;
            }
            while(c==s2[j] && j<s2.size())
            {
                j++;
                size2++;
            }
            if(size2<size1 || (j==s2.size()&&i<s1.size())||(i==s1.size()&&j<s2.size()))
            {
                ans=false;
                break;
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
    return 0;
}
