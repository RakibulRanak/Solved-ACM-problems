#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n;
    d=n;
    int temp=0;
    while(1)
    {
        while(n!=0)
        {
            temp+=n%10;
            n/=10;
        }
       // cout<<temp<<" bhj"<<endl;
        if(temp%4==0)
        {
            cout<<d<<endl;
            return 0;
        }
        temp=0;
        d++;
        n=d;
    }

}
