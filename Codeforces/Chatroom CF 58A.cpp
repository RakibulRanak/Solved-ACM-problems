#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool ans=false;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='h')
        {
            for(int j=i+1; j<s.length(); j++)
            {
                if(s[j]=='e')
                {
                    for(int k=j+1; k<s.length(); k++)
                    {
                        if(s[k]=='l')
                        {
                            for(int l=k+1; l<s.length(); l++)
                            {
                                if(s[l]=='l')
                                {
                                    for(int m=l+1; m<s.length(); m++)
                                    {
                                        if(s[m]=='o')
                                        {
                                            ans=true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    ans=false;
    return 0;

}
