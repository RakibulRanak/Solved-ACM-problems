#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    gcd(b%a,a);

}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int g=gcd(a,b);
        //cout<<g<<endl;
        if(c%g==0)
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"No"<<endl;
    }
    return 0;
}
