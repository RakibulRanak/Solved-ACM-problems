#include<bits/stdc++.h>
using namespace std;

int main()
{

   long long int a,b,temp=0;
    cin>>a>>b;
    again:;
    if(a==0||b==0)
        goto endprocess;
    if(a>=2*b){
        //cout<<a<<"if 1st "<<b<<" "<<temp;
        temp=a/(2*b);
        a=a-(2*b*temp);
        //cout<<temp<<" <temp,a>"<<a<<endl;

        goto again;
    }
    if(b>=2*a)
    {
         //cout<<a<<"if b>=2a "<<b<<endl;
        temp=b/(2*a);
        b=b-(2*a*temp);
        //cout<<temp<<"<temp,b> "<<b<<endl;

        goto again;
    }


    endprocess:;
    cout<<a<<" "<<b<<endl;
    return 0;
}
