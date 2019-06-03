#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    char c;
    while(cin>>c)
    {
        if(c == '0' || c == '1')
        {
            ans = (ans<<1)+c-'0';
            //cout<<ans<<" ghh"<<endl;
            if(ans >= 131071)
                ans %= 131071;
        }
        else if(c == '#')
        {
            {
                if(ans==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            ans = 0;
        }
    }
    return 0;
}
