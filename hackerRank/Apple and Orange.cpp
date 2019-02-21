#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,A,B,apple=0,orange=0,temp;
    cin>>s>>t>>a>>b>>A>>B;
    for(int i=0;i<A;i++)
    {
        cin>>temp;
        if(temp+a>=s &&temp+a<=t)
            apple++;

    }
    for(int i=0;i<B;i++)
    {
        cin>>temp;
        if(b+temp<=t&&b+temp>=s)
            orange++;

    }
    cout<<apple<<endl<<orange<<endl;
    return 0;
}
