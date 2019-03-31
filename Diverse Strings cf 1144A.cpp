#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    int n;
    cin>>n;
    while(n--)
    {
        cin>>s;

        sort(s.begin(), s.end());
        int len=s.size();
        bool temp=true;
        for(int i=1; i<len; i++)
        {
            if(s[i]-s[i-1]!=1)
            {
                temp=false;
                break;
            }

        }
        if(temp)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
