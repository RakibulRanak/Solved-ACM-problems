#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+'){
            ans++;
        }
        else{
            if(ans>0)
                ans--;
        }
    }
    cout<<ans<<endl;
    return 0;

}
