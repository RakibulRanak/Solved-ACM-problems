#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c;
    cin>>c;
    while(c--)
    {
        long long n,s,t,temp;
        cin>>n>>s>>t;
        long long m=s+t;
        if(m>n)
        {
            temp=m-n;
            s-=temp;
            t-=temp;

        }
        cout<<max(s,t)+1<<endl;

    }
}
